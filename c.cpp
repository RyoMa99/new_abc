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

  long long ans = 0;
  for (long long i = 1; pow(i,3) <= n; i++)
  {
    for (long long j = i; i*j*j <= n; j++)
    {
      ans+=n/i/j-j+1;
    }
  }

  ce(ans);
  return 0;
}
