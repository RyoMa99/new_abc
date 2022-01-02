#include <bits/stdc++.h> //iostreamやstring、cmathなどの標準ライブラリを入れられる。競プロでよく使われる
using namespace std;

#define ce(s) cout<< s << endl; // 関数の定義

int main()
{
  int a,b;
  cin >> a >> b;
  ce((int)pow(32,(a-b))); // c++のべき乗はpowを使う。
  return 0;
}