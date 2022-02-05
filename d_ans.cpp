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
  ll k; cin >> k;
  vector<int> a(n);
  rep(i,0,n) cin >> a[i];

  int r = 0;
  ll ans = 0;
  ll sum = 0;
  // 尺取り法
  rep(l,0,n)
  {
    while (sum < k)
    {
      if (r == n) break;
      sum += a[r];
      r++;
    }
    // sumがkより小さいままこの条件に進むときはrが右端まで達してもsumがkを超えなかった時だけ
    if (sum < k) break;
    // rは部分配列として見ているものの一つ右となりを示しているため、+1する。
    ans += n - r + 1;
    sum -= a[l];
    // cout << "sum: " << sum << endl;
  }
  ce(ans);
  return 0;
}
