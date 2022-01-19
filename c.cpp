#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

ll n, x;
ll ans = 0;
vector<vector<ll>> a;

void dfs(ll pos, ll seki)
{
  // 底まで探索した
  if(pos == n)
  {
    if (seki == x) ans++;
    return;
  }

  for(ll c:a[pos])
  {
    if(seki>x/c) continue; // sekiにcを掛けたらxより大きくなる時は続きの探索はしない。また、オーバーフロー対策でseki*cを安易にしない。
    dfs(pos+1,seki*c);
  }
}

int main()
{
  cin >> n >> x;
  a.resize(n);
  rep(i,0,n)
  {
    ll l; cin >> l;
    a[i].resize(l);
    rep(j,0,l) cin >> a[i][j];
  }
  dfs(0,1);
  ce(ans);
  return 0;
}
