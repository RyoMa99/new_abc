#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define sp(i) cout<< fixed << setprecision((int)i); // 浮動小数点の表示桁数を指定
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)
#define all(x) x.begin(), x.end()

int main()
{
  int n; cin >> n;
  set<vector<int>> st;
  rep(i,0,n)
  {
    int l; cin >> l;
    vector<int> v(l);
    rep(j,0,l) cin >> v[j];
    st.insert(v);
  }

  ce(st.size());
  return 0;
}
