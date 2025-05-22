#include <algorithm>
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
  int n, m;
  cin >> n;
  vector<ll> a(n);
  fore(i, 0, n) cin >> a[i];
  cin >> m;
  vector<ll> b(m);
  fore(i, 0, m) cin >> b[i];

  sort(ALL(a));
  sort(ALL(b));
  vector<ll> res = a;
  res.insert(res.end(), b.begin(), b.end());
  sort(res.begin(), res.end());
  res.erase(unique(res.begin(), res.end()), res.end());

  ll d = 0;
  ll apoint = n * 3;
  ll bpoint = m * 3;
  ll best_apoint = apoint, best_bpoint = bpoint;
  fore(i, 0, res.size()) {
    d = res[i];
    ll x = upper_bound(ALL(a), d) - a.begin();
    apoint = x * 2 + (n - x) * 3;
    ll xb = upper_bound(ALL(b), d) - b.begin();
    bpoint = xb * 2 + (m - xb) * 3;
    if (apoint - bpoint > best_apoint - best_bpoint ||
        (apoint - bpoint == best_apoint - best_bpoint &&
         apoint > best_apoint)) {
      best_apoint = apoint;
      best_bpoint = bpoint;
    }
  }
  cout << best_apoint << ":" << best_bpoint << "\n";
}
