#include <bits/stdc++.h>
#define fore(i, a, b) for (int i = a, _b = (b); i < _b; ++i) // FIXED
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

bool isEven(ll p) { return p % 2 == 0; }

int main() {
  FIN;
  ll n;
  cin >> n;
  vector<ll> a(n);
  fore(i, 0, n) { cin >> a[i]; }
  if (isEven(a[0]) && !isEven(a[1]) && isEven(a[2])) {
    cout << 2 << '\n';
  } else if (!isEven(a[0]) && isEven(a[1]) && !isEven(a[2])) {
    cout << 2 << '\n';
  } else if (!isEven(a[0]) && isEven(a[1]) && isEven(a[2])) {
    cout << 1 << '\n';
  } else if (isEven(a[0]) && !isEven(a[1]) && !isEven(a[2])) {
    cout << 1 << '\n';
  } else if (isEven(a[0]) && isEven(a[1])) {
    fore(i, 2, n) {
      if (!isEven(a[i])) {
        cout << i + 1 << '\n';
        return 0;
      }
    }
  } else {
    fore(i, 2, n) {
      if (isEven(a[i])) {
        cout << i + 1 << '\n';
        return 0;
      }
    }
  }
}
// SOLUCION ALTERNATIVA:
// int main() {
//   FIN;
//   ll n;
//   cin >> n;
//   vector<ll> a(n);
//   fore(i, 0, n) cin >> a[i];
//
//   // Contamos cuántos pares hay en los primeros 3
//   int evenCount = isEven(a[0]) + isEven(a[1]) + isEven(a[2]);
//
//   bool lookingForEven = (evenCount < 2); // si hay pocos pares, buscamos al
//   par raro
//
//   fore(i, 0, n) {
//     if (isEven(a[i]) == lookingForEven) {
//       cout << i + 1 << '\n';
//       break;
//     }
//   }
// }
