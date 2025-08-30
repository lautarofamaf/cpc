#include <bits/stdc++.h>
#define fore(i, a, b) for (int i = a, _b = (b); i < _b; ++i) // FIXED
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

int main() {
  FIN;
  int t;
  cin >> t;
  while (t--) {
    char c;
    fore(i, 0, 3) {
      string s;
      cin >> s;
      sort(ALL(s), [](char a, char b) {
        if (a == '?')
          return false;
        if (b == '?')
          return true;
        return a < b;
      });
      if (s[2] == '?') {
        if ((s[0] == 'A' && s[1] == 'B') || (s[0] == 'B' && s[1] == 'A'))
          c = 'C';
        if ((s[0] == 'A' && s[1] == 'C') || (s[0] == 'C' && s[1] == 'A'))
          c = 'B';
        if ((s[0] == 'C' && s[1] == 'B') || (s[0] == 'B' && s[1] == 'C'))
          c = 'A';
      }
    }
    cout << c << endl;
  }
}
