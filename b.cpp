#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;

int main(){
  string s, t, ans;
  cin >> s >> t;
  ans = "No";

  for (int i = 0; i < s.length()-1; i++)
  {
    if (s[i] == t[i]) continue;
    char tmp = s[i];
    s[i] = s[i+1];
    s[i+1] = tmp;
    break;
  }
 
  if (s == t) ans = "Yes";

  ce(ans);
  return 0;
}