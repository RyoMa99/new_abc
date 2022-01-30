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
  ll n; cin >> n;
  
  list<ll> ans = {0};
  auto it = ans.begin();
  for(ll i = 1; i < n+1; i++)
  {
    char c; cin >> c;
    if (c == 'L')
    {
      it = ans.insert(it,i);
    }else
    {
      it++;
      it = ans.insert(it,i);
    }
  }

  for(ll i: ans)
  {
    cout << i;
    if (i == ans.back()){
      cout << endl;
      break;
   } 
    cout << " ";
  }
  return 0;
}
