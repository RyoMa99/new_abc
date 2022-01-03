#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)

int n,m;
string arr[101];
int win[101];

int battle(int round, int userA, int userB) {
    char a = arr[userA][round];
    char b = arr[userB][round];

    if (a == b) return -1;

    if (a == 'G' && b == 'C') return userA;
    if (a == 'C' && b == 'P') return userA;
    if (a == 'P' && b == 'G') return userA;

    return userB;
}

int main()
{
  cin >> n >> m;
  rep(i,0,n*2) cin >> arr[i];

  vector<int> order;
  rep(i,0,n*2) order.push_back(i);

  rep(round, 0, m)
  {
    rep(k, 0, n)
    {
      int res = battle(round, order[k*2], order[k*2+1]);
      // 引き分けは無視
      if (0 <= res) win[res]++;
    }

    // ラムダ式の[&]はラムダの外の変数を参照する。
    sort(order.begin(), order.end(), [&](int a, int b) {
        // 勝ち数の降順
        if (win[a] != win[b]) return win[a] > win[b];
        // 勝ち数が同じだと若い番号の人が前。
        else return a < b;
    });
  }

  rep(i, 0, n * 2) ce(order[i] + 1);
  return 0;
}
