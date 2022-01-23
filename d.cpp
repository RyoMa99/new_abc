#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

int n;
int a[20][20];

vector<pair<int,int>> vec;
bool used[20];

// 組み合わせの順番は関係ないから、1を固定して再帰処理で繰り返し処理をしていけばよい。
int calc()
{
  // pairを1パターン作りきれた度に入る
  if(vec.size() == n)
  {
    int ret = 0;
    // xorで全部足す
    for(auto p: vec) ret ^= (a[p.first][p.second]);
    return ret; 
  }

  // 未だpairを作っていない最小の数字を探す
  int l;
  for(int i = 1; i <= 2*n; i++)
  {
    if(!used[i]){
      l = i;
      break;
    }
  }
  used[l] = true;

  int ret = 0; // 戻り値(期待値の最大値)
  // 1のpair分loopさせる
  for(int i = 1; i <= 2*n; i++)
  {
    if(!used[i]){
      vec.push_back({l, i}), used[i] = true; // 使われていない数字の内、最も小さいものをpairの左側としてvecにpush
      // 再帰処理で残りのpairを作っていく
      // 期待値は、都度大きいほうだけ記憶させる
      ret = max(ret, calc());
      vec.pop_back(), used[i] = false;
    }
  }

  used[l] = false;
  return ret;
}

int main()
{
  cin >> n;
  for(int i = 1; i <= 2*n; i++)
  {
    for(int j = i+1; j <= 2*n; j++)
    {
      cin >> a[i][j];
    }
  }

  ce(calc());
  return 0;
}
