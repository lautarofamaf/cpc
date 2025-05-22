#include <bits/stdc++.h>
#define fore(i, a, b) for (int i = a, _b = (b); i < _b; ++i) // FIXED
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

// int main() {
//
//   ll n;
//   cin >> n;
//   vector<ll> a(n), pref_v(n + 1, 0);
//   fore(i, 0, n) { cin >> a[i]; }
//   ll res = 0;
//   ll sumtotal = 0;
//   ll currentSum = 0;
//   fore(i, 0, n) { sumtotal += a[i]; }
//   ll i, j;
//   i = 0;
//   while (i < n - 1) {
//     currentSum += a[i];
//     if (2 * currentSum == sumtotal) {
//       res++;
//     }
//     // sumtotal -= a[i];
//     i++;
//   }
//   cout << res << "\n";
// }
// ABAJO MI VERSION QUE FUNCIONABA
int main() {
  FIN;
  ll n;
  cin >> n;
  vector<ll> a(n);
  fore(i, 0, n) { cin >> a[i]; }

  ll sumtotal = 0;
  fore(i, 0, n) { sumtotal += a[i]; }

  ll res = 0;
  ll currentSum = 0;
  fore(i, 0, n - 1) { // solo hasta n-2 inclusive
    currentSum += a[i];
    sumtotal -= a[i];
    if (currentSum == sumtotal) {
      res++;
    }
  }

  cout << res << "\n";
}
