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
  vector<pair<ll,ll>> works(n);
  rep(i,0,n)
  {
    ll a,b; cin >> a >> b;
    works[i] = {a,b};
  }

  sort(all(works),[](pair<ll,ll> a, pair<ll,ll> b){
    if (a.second != b.second) return a.second < b.second;
    else return a.first < b.first;
  });

  string ans = "Yes";
  ll time = 0;
  for(pair<ll,ll> work: works)
  {
    time += work.first;
    if (time > work.second) ans = "No";
  }

  ce(ans);
  return 0;
}
