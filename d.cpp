#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

int main()
{
  int h,w; cin >> h >> w;
  vector<vector<char>> c(h,vector<char>(w));
  rep(i,0,h) rep(j,0,w) cin >> c[i][j];
  
  vector<vector<int>> cnt(h+1,vector<int>(w+1));
  for(int i = h-1; i >= 0;i--)
  {
    for(int j = w-1; j >= 0;j--)
    {
      if(c[i][j] == '#') continue;
      cnt[i][j] = max(cnt[i][j+1],cnt[i+1][j])+1;
    }
  }
  // rep(i,0,h) rep(j,0,w) ce(cnt[i][j]);
  ce(cnt[0][0]);

  return 0;
}
