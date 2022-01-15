#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

int main()
{
  long long n,a,b; cin >> n >> a >> b;
  long long p,q,r,s; cin >> p >> q >> r >> s;
  
  for(long long i = p; i < q+1; i++)
  {
    for(long long j =r; j < s+1; j++)
    {
      cout << ((i-j == a-b || i+j == a+b) ? "#" : ".");
    }
    cout << endl;
  }
  return 0;
}
