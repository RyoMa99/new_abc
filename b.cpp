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
  map<int,int> mp;
  rep(i,0,4*n-1)
  {
    int a; cin >> a;
    mp[a]++;
  }

  for(auto &item : mp)
  {
    if(item.second == 3) ce(item.first);
  }
  return 0;
}
