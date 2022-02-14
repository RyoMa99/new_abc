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


int main()
{
  int h,w,n; cin >> h >> w >> n;
  vector<pair<int,int>> vec(n);
  // setでは何番目を出力出来ないので、vectorで重複を削除する方針を取る
  vector<int> A(n), B(n);
  rep(i,0,n)
  {
    int a,b; cin >> a >> b;
    A[i] = a;
    B[i] = b;
    vec[i] = {a,b};
  }

  sort(all(A));
  sort(all(B));
  A.erase(unique(all(A)),A.end());
  B.erase(unique(all(B)),B.end());

  for(const auto& ab: vec)
  {
    cout << lower_bound(all(A),ab.first) - A.begin() + 1 << " " << lower_bound(all(B),ab.second) - B.begin() + 1 << endl;
  }

  return 0;
}
