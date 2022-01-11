#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define rrep(ri,rj,rk) for (int ri = (int)rj; ri > (int)rk; ri--)
#define all(x) x.begin(), x.end()

int main()
{
  int n, k; cin >> n >> k;
  vector<int> p(n);
  rep(i,0,n)
  {
    int a, b, c; cin >> a >> b >> c;
    p[i] = a + b + c;
  }
  vector<int> q = p;
  sort(q.begin(),q.end(),greater<int>());
  
  for(int i: p)
  {
    string ans;
    ans = i+300 >= q[k-1] ? "Yes" : "No";
    ce(ans); 
  }
  return 0;
}
