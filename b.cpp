#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

int main()
{
  int n; cin >> n;
  vector<string> v(n); 
  rep(i,0,n) cin >> v[i];

  int m = 0;
  string ans;
  rep(i,0,n)
  {
    int cnt = 0;
    string t = v[i];
    rep(j,0,n) if (t == v[j]) cnt++;
    if(m < cnt)
    {
      m = cnt;
      ans = t;
    }
  }

  ce(ans);
  return 0;
}
