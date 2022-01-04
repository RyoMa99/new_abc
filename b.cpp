#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;
#define rep(ri,rj,rk) for (int ri = (int)rj; ri < (int)rk; ri++)

int main()
{
  vector<string> vec;
  string s;
  cin >> s;
  vec.push_back(s);

  rep(i,0,s.length())
  {
    string c;
    c = s[s.length()-1];
    s.pop_back();
    s.insert(0,c);

    vec.push_back(s);
  }

  sort(vec.begin(),vec.end());
  ce(vec.front());
  ce(vec.back());

  return 0;
}
