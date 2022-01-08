#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define all(x) x.begin(), x.end()

int main()
{
  int n,m;
  cin >> n >> m;
  vector<vector<double>> vec(n,vector<double>(m,0));
  rep(i,0,n) rep(j,0,m) cin >> vec[i][j];

  int start_num_x = 0, start_num_y = 0;
  rep(j,1,7-m+2)
  {
    double i = (vec[0][0] - (double)j + 7.0) / 7.0;
    if ( (int)(i * 10) % 10 != 0 || i <= 0 || pow(10,100) < i ) continue;
    start_num_x = (int)i;
    start_num_y = j;
  }

  string ans = (start_num_x != 0 && start_num_y != 0) ? "Yes" : "No";
  rep(i,0,n) rep(j,0,m)
  {
    if ( vec[i][j] != vec[0][0] + 7 * i + j ) ans = "No";
  }

  ce(ans);
  return 0;
}
