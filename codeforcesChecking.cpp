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
  short t;
  cin >> t;
  string s = "codeforces";
  set<char> sett;
  fore(i, 0, s.size()) { sett.insert(s[i]); }
  while (t--) {
    char c;
    cin >> c;
    if (sett.count(c) == 1) {
      cout << "YES" << '\n';
    } else {

      cout << "NO" << '\n';
    }
  }
}
