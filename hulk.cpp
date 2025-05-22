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
  ll n;
  cin >> n;
  fore(i, 0, n) {
    if (i != n - 1) {
      if (i % 2 == 0) {
        cout << "I hate that ";
      } else {
        cout << "I love that ";
      }
    } else {
      if (i % 2 != 0) {
        cout << "I love it" << '\n';
      } else {
        cout << "I hate it" << '\n';
      }
    }
  }
}
