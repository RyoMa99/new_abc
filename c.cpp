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
  string s; cin >> s;
  
  int ac = 0;
  rep(i,0,s.size())
  {
    if(s[i] != 'a') break;
    ac++;
  }

  int bc = 0;
  rrep(i,s.size()-1,-1)
  {
    if(s[i] != 'a') break;
    bc++;
  }

  string ad = bc > ac ? string(bc-ac,'a') : "";
  s = ad + s;  

  string a = s.substr(0,ceil((float)s.size()/2.0));
  string b = s.substr(s.size()/2); reverse(b.begin(),b.end());
  string ans = a == b ? "Yes" : "No";
  ce(ans);
  return 0;
}
