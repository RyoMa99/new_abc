#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

bool greater_second(pair<ll,ll> a, pair<ll,ll> b)
{
  return a.second > b.second;
}

int main()
{
  int n,m; cin >> n >> m;
  vector<ll> a(n);
  rep(i,0,n) cin >> a[i];
  sort(a.begin(),a.end());

  vector<pair<ll,ll>> change(m);
  rep(i,0,m){
    ll b, c;
    cin >> b >> c;
    change.push_back({b,c});
  }
  sort(change.begin(),change.end(),greater_second);
  
  int i_c = 0;
  rep(i,0,n)
  {
    if (a[i] >= change[i_c].second) break;
    a[i] = change[i_c].second;
    change[i_c].first--;
    if (change[i_c].first == 0) i_c++;
  }

  ce(accumulate(a.begin(),a.end(),(ll)0));
  return 0;
}
