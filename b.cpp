#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

int main()
{
  string s; cin >> s;
  string t = "oxxoxxoxxoxxoxx";
  string ans = "No";
  rep(i,0,3) if (s == t.substr(i,s.size())) ans = "Yes";
  ce(ans);
  return 0;
}
