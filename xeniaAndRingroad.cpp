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
  ll n, m, res;
  cin >> n;
  cin >> m;
  vector<ll> a(m);
  res = 0;
  fore(i, 0, m) { cin >> a[i]; }
  ll i = 0;
  ll casa_actual = 1;
  fore(i, 0, m) {
    if (a[i] >= casa_actual) {
      res += (a[i] - casa_actual);
      casa_actual = a[i];
    } else {
      res += (n - casa_actual + a[i]);
      casa_actual = a[i];
    }
  }
  cout << res << '\n';
}
