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
  string s;
  cin >> s;
  string res = "";
  fore(i, 0, s.size()) {
    if (i != s.size()) {
      if (s[i] == '-' && s[i + 1] == '.') {
        res += '1';
        i++;
        continue;
      } else if (s[i] == '-' && s[i + 1] == '-') {
        res += '2';
        i++;
        continue;
      }
    }
    if (s[i] == '.')
      res += '0';
  }
  cout << res << '\n';
}
