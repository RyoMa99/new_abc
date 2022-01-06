#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define all(x) x.begin(), x.end()

int main()
{
  string s;
  cin >> s;
  
  //文字列の末尾の文字を取得するときは長さから取りたい文字分引く
  string ans = s.substr(s.length()-2) == "er" ? "er" : "ist";
  ce(ans);
  return 0;
}
