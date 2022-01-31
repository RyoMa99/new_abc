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
  int b = 1,f = n;

  rep(i,0,m)
  {
    int l,r; cin >> l >> r;
    b = max(b,l);
    f = min(f,r);
  }

  int ans = f >= b ? f - b + 1 : 0;
  ce(ans);
  return 0;
}
