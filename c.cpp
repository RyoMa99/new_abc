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
  ll n; cin >> n;
  vector<ll> vec(n);
  rep(i,0,n) cin >> vec[i];
  ll x; cin >> x;
  ll ans = x / accumulate(vec.begin(),vec.end(),(ll)0) * vec.size();
  x %= accumulate(vec.begin(),vec.end(),(ll)0);

  for(ll a: vec)
  {
    ans++;
    x -= a;
    if (x < 0) break;
  }

  ce(ans);
  return 0;
}
