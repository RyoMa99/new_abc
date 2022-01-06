#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define all(x) x.begin(), x.end()

int main()
{
  int n;
  cin >> n;
  vector<array<int,2>> vec(n);
  rep(i,0,n) cin >> vec[i][0] >> vec[i][1];

  int cnt = 0;
  rep(i,0,n) rep(j,i+1,n) rep(k,j+1,n)
  {
    if ((vec[j][0] - vec[i][0])*(vec[k][1] - vec[i][1])-(vec[j][1] - vec[i][1])*(vec[k][0] - vec[i][0]) != 0) cnt++;
  }

  ce(cnt);
  return 0;
}
