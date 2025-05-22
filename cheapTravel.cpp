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
//   FIN;
//   ll n, m, a, b, res;
//   cin >> n >> m >> a >> b;
//   res = 0;
//   while (n) {
//     if ((b / (double)m) < a) {
//       // uso m
//       if (n - m >= 0) {
//         n = n - m;
//         res += b;
//       } else if (n - m < 0) {
//         if (n * a < b) {
//           res += n * a;
//           n = 0;
//           break;
//         } else {
//           n = 0;
//           res += b;
//           break;
//         }
//       }
//     } else {
//       res += n * a;
//       n = 0;
//     }
//   }
//   cout << res << '\n';
// }
// ACEPTADO CODIGO ARRIBA PERO INEFICIENTE Y DESPROLIJO
int main() {
  FIN;
  ll n, m, a, b;
  cin >> n >> m >> a >> b;

  // Opción 1: comprar solo pasajes individuales
  ll option1 = n * a;

  // Opción 2: comprar solo packs de m viajes (aunque te sobren)
  ll option2 = ((n + m - 1) / m) * b;

  // Opción 3: comprar algunos packs y el resto individuales
  ll packs = n / m;
  ll rest = n % m;
  ll option3 = packs * b + rest * a;

  cout << min({option1, option2, option3}) << '\n';
}
