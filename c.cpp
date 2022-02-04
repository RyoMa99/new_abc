#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()
ll DIV = 1000000007;

int main()
{
  int n, m; cin >> n >> m;
  vector<int> ng(n+2,false);
  rep(i,0,m)
  {
    int a; cin >> a;
    ng[a] = true;
  }

  vector<int> dp(n+1,0);
  dp[0] = 1;
  rep(i,0,n) rep(c,1,3) if(!ng[i+c]) dp[i+c] = (dp[i+c] + dp[i]) % DIV;

  ce(dp[n]);
  return 0;
}
