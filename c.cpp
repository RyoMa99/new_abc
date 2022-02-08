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
  int n; cin >> n;
  // ハッシュマップ相当 同じキーの値はない。キーの探索が早い。O(1)
  // mapは順序付けできるが、unordered_mapは順序付けできない。
  unordered_map<string,int> um;
  ll ans = 0;
  rep(i,0,n)
  {
    string s; cin >> s;
    // stringを一文字ずつ分割するときはvector<char>にぶちこむ。
    vector<char> c(all(s));
    sort(all(c));
    // vector<char>の要素結合
    ostringstream os;
    copy(all(c),ostream_iterator<char>(os));
    s = os.str();

    // unordered_mapのキー探索
    // 見つからなかった時、iteratorがend()になる。
    auto itr = um.find(s);
    if (itr != um.end()){
      um[s]++;
      ans += um[s];
    }else{
      um[s] = 0;
    }
  }

  ce(ans);
  return 0;
}
