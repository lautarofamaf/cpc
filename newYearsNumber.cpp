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
    int n;
    cin >> n;
    bool b = false;
    int frobenius = 2020 * 2021 - 2020 - 2021;
    if (n > frobenius)
      cout << "YES" << endl;
    else {
      fore(i, 0, n / 2020 + 1) {
        if ((n - i * 2020) % 2021 == 0) {
          b = true;
          break;
        }
      }
    }
    cout << (b ? "YES" : "NO") << endl;
  }
}
