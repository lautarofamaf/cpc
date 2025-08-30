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
    int res = (int)s[0] - 48;
    if (res != 1) {
      res = (res - 1) * 10;
      fore(i, 1, s.size() + 1) { res += i; }
    } else {
      fore(i, 0, s.size() + 1) { res += i; }
      res--;
    }
    cout << res << endl;
  }
}
