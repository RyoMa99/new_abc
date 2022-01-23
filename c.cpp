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
  int n,m; cin >> n >> m;
  vector<string> s(n);
  map<string,bool> t;
  rep(i,0,n) cin >> s[i];
  rep(i,0,m)
  {
    string tm; cin >> tm;
    t[tm] = true;
  }

  for(auto &sn : s)
  {
    string ans = t[sn] ? "Yes" : "No";
    ce(ans);
  }
  return 0;
}
