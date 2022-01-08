#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define all(x) x.begin(), x.end()

int main()
{
  vector<char> vec;
  string s;
  cin >> s;
  for (char c: s)
  {
    vec.push_back(c);
  }
  sort(vec.begin(),vec.end());
  vec.erase(unique(all(vec)),vec.end());
  switch (vec.size())
  {
  case 1:
    ce(1);
    break;
  case 2:
    ce(3);
    break;
  default:
    ce(6);
    break;
  }
  return 0;
}
