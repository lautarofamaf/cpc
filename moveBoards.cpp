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
  while (t--) {
    ll n;
    ll res;
    cin >> n;
    ll l = floor(n / 2);
    res = 8 * ((l * (l + 1) * (2 * l + 1)) / 6); // suma de cuadrados mult por 8
    cout << res << '\n';
  }
}
