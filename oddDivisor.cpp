#include <bits/stdc++.h>
#include <cmath>
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
    if (n % 2 == 1) {
      cout << "YES" << '\n';
    } else {
      // n % 2 == 0;
      if ((n & (n - 1)) == 0) {
        cout << "NO" << '\n';
      } else {
        cout << "YES" << '\n';
      }
    }
  }
}
