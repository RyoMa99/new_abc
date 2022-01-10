#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()


int main()
{
  set<int> s;
  rep(a,1,143) rep(b,1,143) if ((4*a*b+3*a+3*b) <= 1000 ) s.insert(4*a*b+3*a+3*b);

  int n; cin >> n;
  int ans = 0;
  rep(i,0,n)
  {
    int m; cin >> m;
    if (!any_of(s.begin(),s.end(),[&m](int e){ return m == e;})) ans++;
  } 

  ce(ans);
  return 0;
}
