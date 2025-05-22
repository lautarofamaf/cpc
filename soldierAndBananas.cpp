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
  ll k, n, w;
  cin >> k;
  cin >> n;
  cin >> w;
  ll res = 0;
  fore(i, 1, w + 1) { res += i * k; }
  if (res > n) {
    cout << res - n << '\n';
  } else {

    cout << 0 << '\n';
  }
}
