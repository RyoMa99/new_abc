#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define all(x) x.begin(), x.end()

// fxの関数作った方がよい
int f(int x) {return x*x+2*x+3;}

int main()
{
  int t;
  cin >> t;

  int f = t*t + 2 * t + 3;
  int ff = f*f + 2 * f + 3;
  int ff_t = (f+t)*(f+t) + 2 * (f+t) + 3;
  int ans = (ff_t+ff)*(ff_t+ff) + 2 * (ff_t+ff) + 3;

  ce(ans);
  return 0;
}
