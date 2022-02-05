#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()
#define mod 998244353
#define inv2 499122177

ll triangle_number(ll x)
{
  x %= mod;
  ll res = x;
  res *= (x+1);
  res %= mod;
  res *= inv2;
  res %= mod;
  return res;
}

int main()
{
  ll n; cin >> n;

  ll res = 0;
  ll p10 = 10;
  for (int dg=1;dg<=18;dg++)
  {
    ll l = p10/10;
    ll r = min(n,p10-1);
    if(l <= r)
    {
      res += triangle_number(r-l+1);
      res %= mod;
    }
    p10 *= 10;
  }

  ce(res);
  return 0;
}
