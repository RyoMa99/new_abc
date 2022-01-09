#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

#define N 200001
long long t[N];
int k[N];
vector<int> e[N];
bool used[N];

int main()
{
  int n, x; cin >> n;
  long long ans = 0;
  rep(i,0,N) used[i] = false;

  rep(i,0,n)
  {
    cin >> t[i] >> k[i];
    rep(j,0,k[i])
    {
      cin >> x;
      e[i].push_back(x-1);
    }
  }

  used[n-1] = true;
  // n番目から1番目までを走査
  // used配列で技n習得に必要な技かどうかの判定結果を保持して置く
  // 幅優先探索の考え方
  // 「1≤j≤Kiについて、Ai,j<i であることが保証されます」という条件から小さい数の技の習得に大きい数の技が必要になることはない
  rrep(i,n-1,-1)
  {
    if(used[i])
    {
      ans += t[i];
      rep(j,0,k[i])
      {
        used[e[i][j]] = true;
      }
    }
  }

  ce(ans);
  return 0;
}
