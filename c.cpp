#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

int main()
{
  long long n, w; cin >> n >> w;
  vector<pair<long long ,long long>> vec;
  rep(i,0,n)
  {
    int a,b;cin >> a >> b;
    vec.push_back({a,b});
  }
  sort(vec.begin(), vec.end(), greater<pair<int,int>>());

  unsigned long long ans = 0;
  rep(i,0,n)
  {
    ans += vec[i].first * min(vec[i].second,w);
    w -= vec[i].second;
    if (w <= 0) break;
  }

  ce(ans);
  return 0;
}
