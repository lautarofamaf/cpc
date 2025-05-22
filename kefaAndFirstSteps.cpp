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
  ll n;
  ll res = 0;
  cin >> n;
  vector<ll> a(n);
  fore(i, 0, n) { cin >> a[i]; }
  if (n == 1) {
    cout << 1 << '\n';
    return 0;
  }
  ll max = 0;
  ll acum = 1;
  bool b = false;
  fore(i, 0, n - 1) {
    if (a[i] <= a[i + 1]) {
      acum++;
    } else {
      b = true;
      acum = 1;
    }
    if (acum >= max) {
      max = acum;
    }
  }

  cout << max << '\n';
}
