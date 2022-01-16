#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

int main()
{
  int n,q; cin >> n >> q;
  vector<int> a(n);
  rep(i,0,n) cin >> a[i];
  sort(all(a));
  rep(i,0,q)
  {
    int x; cin >> x;
    int ok, ng; ok = n; ng = -1;
    while(ok - ng > 1)
    {
      int m = (ok + ng) / 2;
      if (a[m] >= x) ok = m;
      else ng = m;
    }
    ce(n - ok);
  }
  return 0;
}
