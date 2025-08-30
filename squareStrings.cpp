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
    string s;
    cin >> s;
    if (s.size() % 2 != 0) {
      cout << "NO" << endl;

    } else {

      bool b = true;
      fore(i, 0, s.size() / 2) {
        if (s[i] != s[s.size() / 2 + i]) {
          b = false;
          break;
        }
      }
      b ? cout << "YES" << endl : cout << "NO" << endl;
    }
  }
}
