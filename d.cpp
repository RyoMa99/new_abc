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
  int n; cin >> n;
  ll k; cin >> k;
  vector<ll> a(n);
  rep(i,0,n) cin >> a[i];

  int r,l; r = l = 0;
  ll ans = 0;
  ll sum = a[0];
  // 尺取り法
  while(l < n)
  {
    if (l == r)
    {
      if (sum >= k) ans++;
      if(r == n-1) break;
      r++;
      sum += a[r];
    }else
    {
      if (sum >= k)
      {
        ans += n-r;
        sum -= a[l];
        l++;
      }else
      {
        if(r == n-1) break;
        r++;
        sum += a[r];
      }
    }
    // cout << "sum: " << sum << endl;
  }
  ce(ans);
  return 0;
}
