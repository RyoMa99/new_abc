#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

int main()
{
  int l, r; cin >> l >> r; l--;
  string s; cin >> s;
  string rs = s.substr(l,r-l);
  reverse(rs.begin(),rs.end());
  ce(s.substr(0,l) + rs + s.substr(r));

  return 0;
}
