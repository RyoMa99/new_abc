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
  int h,w; cin >> h >> w;
  vector<vector<ll>> a(h, vector<ll>(w));
  rep(i,0,h) rep(j,0,w) cin >> a[i][j];

  rep(j,0,w)
  {
    rep(i,0,h)
    {
      cout << a[i][j];
      if (i != h-1) cout << " ";
    }
    cout << endl;
  }
  return 0;
}
