#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)

int main()
{
  int n;
  cin >> n;
  vector<double> a(n),b(n);
  rep(i,0,n) cin >> a[i] >> b[i];
  double t = 0, ans = 0;
  rep(i,0,n) t += (a[i] / b[i]);
  t /= 2;

  rep(i,0,n)
  {
    ans += min(a[i], t*b[i]);
    t -= min(a[i] / b[i], t);
  }

  sp(10);
  ce(ans);
  return 0;
}
