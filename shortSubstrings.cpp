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
    if (s.size() % 2 == 0) {
      fore(i, 0, s.size()) {
        if (i % 2 == 0) {
          cout << s[i];
        }
      }
      cout << s[s.size() - 1];
      cout << endl;
    } else {
      fore(i, 0, s.size() - 1) {
        if (i % 2 == 0) {
          cout << s[i];
        }
      }
      cout << s[s.size() - 1] << endl;
    }
  }
}
