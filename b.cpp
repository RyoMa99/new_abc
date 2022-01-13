#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

int main()
{
  long long a, b; cin >> a >> b;
  int l = a > b ? to_string(b).size() : to_string(a).size();
  string ans = "Easy";
  rep(i,0,l) 
  {
    if(a%10 + b%10 >= 10) ans = "Hard";
    a /= 10; b /= 10;
  }

  ce(ans);
  return 0;
}
