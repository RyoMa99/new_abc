#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

int main()
{
  map<int,vector<int>> mp;
  int n,q; cin >> n >> q;
  rep(i,1,n+1)
  {
    int a; cin >> a;
    mp[a].push_back(i);
  }

  rep(i,0,q)
  {
    int x, k; cin >> x >> k;
    int ans = mp[x].size() < k ? -1 : mp[x][k-1];
    ce(ans);
  }

  return 0;
}
