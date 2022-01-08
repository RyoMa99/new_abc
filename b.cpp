#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define all(x) x.begin(), x.end()

int main()
{
  int n;
  cin >> n;
  vector<pair<double,double>> vec(n);
  rep(i,0,n) 
  {
    double x,y;
    cin >> x >> y;
    vec[i] = make_pair(x,y);
  }

  // 組み合わせの数が分からなくなったなら紙に書く。
  vector<double> ans(n*(n-1)/2);
  rep(i,0,n-1) rep(j,i+1,n)
  {
    ans.push_back(sqrt(pow(vec[j].second - vec[i].second,2) + pow(vec[j].first - vec[i].first,2)));
  }

  // 降順sort
  sort(all(ans),greater<double>());
  // sort使わなくても、ans配列じゃなくてmaxを常に持っておけばよい。
  
  sp(10);
  // rep(i,0,n*(n-1)/2) ce(ans[i]);
  ce(ans[0]);
  return 0;
}
