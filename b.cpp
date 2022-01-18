#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

int main()
{
  string s,t; cin >> s >> t;
  int k = (t[0]-s[0]+26) % 26;
  string s2 = s;
  rep(i,0,s.size())
  {
     s2[i] = ((s2[i]-'a')+k)%26 + 'a';
  }
  string ans = (t == s2) ? "Yes" : "No";
  ce(ans);
  return 0;
}
