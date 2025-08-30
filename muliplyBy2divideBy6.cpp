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
    int res = 0;
    while (n % 6 == 0) {
      n /= 6;
      res++;
    }
    while (n % 3 == 0) {
      n /= 3;
      res += 2;
    }

    if (n == 1)
      cout << res << endl;
    else
      cout << -1 << endl;
  }
}
