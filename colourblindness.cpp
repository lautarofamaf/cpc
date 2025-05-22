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
  ll n, t;
  cin >> t;
  while (t--) {
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    bool b = true;
    fore(i, 0, n) {
      if ((s1[i] == 'B' && s2[i] == 'R') || (s1[i] == 'G' && s2[i] == 'R')) {
        b = false;
        break;
      }
      if (s1[i] == 'R') {
        if (s1[i] != s2[i]) {
          b = false;
          break;
        }
      }
    }
    if (b)
      cout << "YES" << '\n';
    else
      cout << "NO" << '\n';
  }
}
