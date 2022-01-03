#include <bits/stdc++.h>
using namespace std;

#define ce(s) cout<< s << endl;

int main()
{
  int n, p;
  cin >> n >> p;

  int cnt = 0;
  for (int i=0; i < n; i++)
  {
    int num;
    cin >> num;
    if (num < p) cnt++;
  }

  ce(cnt);
  return 0;
}
