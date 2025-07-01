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
  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;
  int res = 0;
  fore(i, 1, d + 1) {
    if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
      res++;
  }
  cout << res << endl;
}
