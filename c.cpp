#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

// 最大公約数 ユークリッドの互除法
template <typename T>
T gcd(T a, T b)
{
  if (a%b == 0) return b;
  else return gcd(b,a%b);
}

// 最大公倍数
template <typename T>
T lcm(T a, T b)
{
  return a*b / gcd(a,b);
}

int main()
{
  ll a,b,c,d; cin >> a >> b >> c >> d;
  a--; // a以上が範囲なので、aより1小さい数を基準にする
  ll count_c = b/c - a/c;
  ll count_d = b/d - a/d;
  ll count_cd = b/(lcm(c,d)) - a/(lcm(c,d));

  ce(b-a - (count_c+count_d-count_cd));
  return 0;
}
