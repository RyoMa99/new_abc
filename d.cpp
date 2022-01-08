#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define all(x) x.begin(), x.end()

int main()
{
  int n,k;
  cin >> n >> k;
  vector<int> vec(n);
  rep(i,0,n) cin >> vec[i];

  // priority_queueはデフォルトだと最大値を出力するので、greater関数を使って最小値をrootにする。
  priority_queue<int,vector<int>,greater<int>> que;
  rep(i,0,k) que.push(vec[i]);
  ce(que.top());

  rep(i,k,n)
  {
    // queの最小値よりも新しい対象の要素が大きければ最小値を変更する。
    // 子の最小値の変更を少ない計算量で済ませるためpriority_queueを使っている
    if(que.top() < vec[i])
    {
      que.pop();
      que.push(vec[i]);
    }
    ce(que.top());
  }

  return 0;
}
