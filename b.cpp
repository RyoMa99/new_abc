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
  vector<int> a(n);
  rep(i,0,n) cin >> a[i];

  vector<int> r;
  r.push_back(a[0]);
  int re_r = a[0];
  rep(i,1,n)
  {
    re_r = (re_r + a[i]) % 360;
    r.push_back(re_r);
  }
  r.push_back(360);
  sort(all(r));

  int ans = r[0];
  rep(i,1,r.size())
  {
    ans = max(ans,r[i]-r[i-1]);
  }

  ce(ans);
  return 0;
}
