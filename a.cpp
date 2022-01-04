#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)

int main()
{
  int x;
  cin >> x;
  string ans;
  ans =  x != 0 && x % 100 == 0 ? "Yes" : "No";

  ce(ans);
  return 0;
}
