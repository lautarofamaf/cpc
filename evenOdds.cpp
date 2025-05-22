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
  ll n, k;
  cin >> n >> k;
  ll odd_count = (n + 1) / 2; // cantidad de impares
  ll even_count = n / 2;      // cantidad de pares
  if (k <= odd_count) {
    cout << 2 * k - 1 << '\n'; // k-ésimo impar
  } else {
    k -= odd_count;
    cout << 2 * k << '\n'; // (k - odd_count)-ésimo par
  }
}
