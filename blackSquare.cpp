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
  int a1, a2, a3, a4;
  cin >> a1 >> a2 >> a3 >> a4;
  string s;
  cin >> s;
  int res = 0;
  fore(i, 0, s.size()) {
    if (s[i] == '1') {
      res += a1;
    } else if (s[i] == '2') {
      res += a2;
    } else if (s[i] == '3') {
      res += a3;
    } else {
      res += a4;
    }
  }
  cout << res << '\n';
}
