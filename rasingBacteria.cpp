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
  int x;
  cin >> x;

  int ans = 0;
  while (x) {
    ans += x & 1; // suma 1 si el bit menos significativo está en 1
    x >>= 1;      // desplaza a la derecha (divide por 2)
  }

  cout << ans << '\n';
  return 0;
}
