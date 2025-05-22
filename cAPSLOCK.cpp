#include <bits/stdc++.h>
#include <cctype>
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
  bool b = true;
  if (islower(s[0])) {
    fore(i, 1, s.size()) {
      if (islower(s[i])) {
        cout << s << '\n';
        return 0;
      }
    }
    s[0] = toupper(s[0]);
    fore(i, 1, s.size()) { s[i] = tolower(s[i]); }
    cout << s << '\n';
    return 0;
  } else {
    fore(i, 1, s.size()) {
      if (islower(s[i])) {
        cout << s << '\n';
        return 0;
      }
    }
    fore(i, 0, s.size()) { s[i] = tolower(s[i]); }
    cout << s << '\n';
    return 0;
  }
}
