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
  int n; cin >> n;
  vector<int> w(n);
  rep(i,0,n) cin >> w[i];
  rep(i,1,n) w[i] += w[i-1];

  int ans = 10001;
  rep(i,0,n-1)
  {
    int s_1 = w[i];
    int s_2 = w[n-1] - w[i];
    ans = min(ans,abs(s_1 - s_2));
  }
  ce(ans);
  return 0;
}
