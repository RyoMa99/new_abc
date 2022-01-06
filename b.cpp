#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define all(x) x.begin(), x.end()

int main()
{
  int h,w;
  cin>>h >> w;
  // 初期サイズ有の2次元vectorの初期化
  vector<vector<int>> a(h,vector<int>(w,0));

  rep(i,0,h) rep(j,0,w) cin >> a[i][j];

  string ans = "Yes";
  rep(i,0,h-1) rep(j,1,w) if (a[i][j] + a[i+1][j-1] < a[i][j-1] + a[i+1][j]) ans = "No";

  ce(ans);
  return 0;
}
