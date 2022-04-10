#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define lrep(ri,rj,rk) for (ll ri = (ll)rj; ri < (ll)rk; ri++)
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

vector<int> x, y;

int main()
{
  rep(i,0,3)
  {
    int xt, yt; cin >> xt >> yt;
    auto x_pos = find(x.begin(),x.end(),xt);
    if (x_pos == x.end())
    {
      x.push_back(xt);
    }else
    {
      x.erase(x_pos);
    }

    auto y_pos = find(y.begin(),y.end(),yt);
    if (y_pos == y.end())
    {
      y.push_back(yt);
    }else
    {
      y.erase(y_pos);
    }
  }

  cout << x[0] << " " << y[0] << endl;
  return 0;
}
