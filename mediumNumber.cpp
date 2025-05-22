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
  int t, a, b, c;
  cin >> t;
  while (t--) {
    cin >> a >> b >> c;
    if ((a > b && a < c) || (a < b && a > c)) {
      cout << a << '\n';
    }
    if ((b > a && b < c) || (b < a && b > c)) {
      cout << b << '\n';
    }
    if ((c > a && c < b) || (c < a && c > b)) {
      cout << c << '\n';
    }
  }
}
