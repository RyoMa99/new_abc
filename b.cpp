#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

int main()
{
  int n; cin >> n;
  vector<pair<string,int>> vec;
  rep(i,0,n){
    string s;int p; cin >> s >> p;
    vec.push_back({s,p});
  } 

  // ans配列とvec配列を要素番号で結びつける
  vector<int> ans(n); iota(all(ans),0);
  sort(all(ans), [&](int a, int b){
    // 名前順
    if(vec[a].first != vec[b].first) return vec[a].first < vec[b].first;
    // 点数高い順
    return vec[a].second > vec[b].second;
  });

  for(int a: ans){
    ce(++a);
  }
  return 0;
}
