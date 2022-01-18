#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

int main()
{
  int n,m; cin >> n >> m;
  vector<vector<bool>> taka(n,vector<bool>(n)), ao(n,vector<bool>(n));
  rep(i,0,m)
  {
    int a, b;cin >> a >> b;
    a--;b--;
    taka[a][b] = taka[b][a] = true;
  }
  rep(i,0,m)
  {
    int c, d;cin >> c >> d;
    c--;d--;
    ao[c][d] = ao[d][c] = true;
  }

  vector<int> p(n); iota(p.begin(),p.end(),0); // iota 第三引数の数字から連番で埋める {0,1,2,3,...,n-1}
  string ans = "No";
  do {
    bool ok = true;
    rep(i,0,n)
    {
      rep(j,0,n)
      {
        // takaはそのまま
        // aoはpの配列を使って玉の配置を変更する
        // 例) taka[1][2]がつながっているかいないかと、p[1]=2 p[2]=0 ao[2][0]がつながっているかいないかを同義で扱うことで実現している
        if(taka[i][j] != ao[p[i]][p[j]]) ok = false;
      }
    }
    if (ok) ans = "Yes";    
  }while(next_permutation(p.begin(),p.end())); // next_permutation() {0,1,2,3}などのvectorの並び順を全通り作る
  ce(ans);
  return 0;
}
