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
  int w,h,x,y; cin >> w >> h >> x >> y;
  int is_multi = x*2 == w && y*2 == h ? 1 : 0;

  sp(6);
  cout << (double)w*(double)h/2.0 << " " << is_multi << endl;
  return 0;
}
