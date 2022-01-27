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
  vector<ll> a(n); rep(i,0,n) cin >> a[i];

  int dp[n][10];memset(dp,0,sizeof(dp));
  dp[0][a[0]] = 1;

  
  for(ll i = 0; i < n-1; i++)
  {
    for(ll j = 0; j < 10; j++)
    {
      dp[i+1][(j+a[i+1])%10] = (dp[i+1][(j+a[i+1])%10] + dp[i][j]) % 998244353;
      dp[i+1][(j*a[i+1])%10] = (dp[i+1][(j*a[i+1])%10] + dp[i][j]) % 998244353;
    }
  }

  rep(i,0,10) ce(dp[n-1][i]);
  return 0;
}
