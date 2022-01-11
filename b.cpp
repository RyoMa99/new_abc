#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

int main()
{
  int n, x;
  cin >> n >> x;

  int a[n];
  rep(i,0,n) cin >> a[i];
  bool r[n];
  rep(i,0,n) r[i] = false;

  int ans = 0;
  while(r[x-1] == false)
  {
    ans++;
    r[x-1] = true;
    x = a[x-1];
  }

  ce(ans);
  return 0;
}
