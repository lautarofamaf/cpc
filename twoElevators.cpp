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
  FIN int t;
  ll a, b, c;
  cin >> t;
  while (t--) {
    cin >> a >> b >> c;
    ll btime, atime;
    btime = abs(b - c) + abs(c - 1);

    atime = abs(a - 1);
    if (a == 1) {
      cout << 1 << '\n';
    } else if (atime < btime) {
      cout << 1 << '\n';
    } else if (atime > btime) {
      cout << 2 << '\n';
    } else {
      cout << 3 << '\n';
    }
  }
  return 0;
}
