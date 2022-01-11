#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

int main()
{
  int s, t, x;
  cin >> s >> t >> x;
  string ans;
  if (s < t)
  {
    ans = (s <= x and x < t) ? "Yes" : "No";
  }else
  {
    ans = x < t or s <= x ? "Yes" : "No";
  }

  ce(ans);
  return 0;
}
