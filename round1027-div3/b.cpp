
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
  int t;
  cin >> t;
  while (t--) {
    string s;
    int n, k;
    cin >> n >> k;
    cin >> s;
    int unos = 0;
    int ceros = 0;
    fore(i, 0, n) {
      if (s[i] == '1')
        unos++;
      else
        ceros++;
    }

    if (0 <= n / 2 - k && n / 2 - k <= min(unos, ceros) &&
        ((ceros - (n / 2 - k)) % 2 == 0)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
