#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define all(x) x.begin(), x.end()

int main()
{
  int n;
  cin >> n;
  vector<int> vec(n);
  fill(all(vec),0);

  rep(i,0,n-1)
  {
    int a, b;
    cin >> a >> b;
    vec[a-1]++;
    vec[b-1]++;
  }

  string ans = "No";
  rep(i,0,n) if (vec[i] == n-1) ans = "Yes";

  ce(ans);
  return 0;
}
