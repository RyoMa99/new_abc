#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

int main()
{
  long long n; cin >> n;
  long long h; cin >> h;
  rep(i,1,n)
  {
    long long hn; cin >> hn;
    if (h >= hn) break;
    h = hn;
  }

  ce(h);
  return 0;
}
