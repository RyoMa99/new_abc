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
  int n,m; cin >> n >> m;
  vector<vector<int>> ls(m);
  rep(i,0,m)
  {
    int k; cin >> k;
    ls[i].resize(k);
    rep(j,0,k) cin >> ls[i][j];
  }

  vector<int> p(m);
  rep(i,0,m) cin >> p[i];

  int ans = 0;
  // ビット全探索で電球on/offの全パターンを調べる
  rep(i,0,1 << n)
  {
    int ok = true;
    rep(j,0,m)
    {
      // and演算で各電球のonになっているスイッチの数を調べる
      int cnt = 0;
      for(auto s: ls[j]){
        // 0indexなのでs-1がスイッチの位置になる
        // 1 << s-1 でon/offを確認したいスイッチを指定する
        // スイッチonの場所を示す i と 各電球と関係のあるスイッチの位置 1 << s-1 がand演算で1になった時、カウントアップする
        if(i&(1<<(s-1))) cnt++; 
      }
      if (p[j] != cnt%2) ok = false;
    }
    if(ok) ans++;
  }
  ce(ans);
  return 0;
}
