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
  cin >> n;

  vector<ll> v(n), u(n), pref_v(n + 1, 0), pref_u(n + 1, 0);

  fore(i, 0, n) {
    cin >> v[i];
    u[i] = v[i];
  }
  sort(u.begin(), u.end());
  fore(i, 1, n + 1) {
    pref_v[i] = pref_v[i - 1] + v[i - 1];
    pref_u[i] = pref_u[i - 1] + u[i - 1];
  }
  ll m, type, l, r, res;
  cin >> m;
  res = 0;
  while (m--) {
    cin >> type >> l >> r;
    if (type == 1) {
      res = pref_v[r] - pref_v[l - 1];
    } else {
      res = pref_u[r] - pref_u[l - 1];
    }
    cout << res << '\n';
  }
}
