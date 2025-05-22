#include <bits/stdc++.h>
#include <climits>
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

  vector<ll> v(n), pref_v(n + 1, 0);

  fore(i, 0, n) { cin >> v[i]; }
  fore(i, 1, n + 1) { pref_v[i] = pref_v[i - 1] + v[i - 1]; }
  ll res;
  ll bestsum = LLONG_MAX;
  res = -1;
  fore(i, 0, n - k + 1) {
    ll sum = pref_v[i + k] - pref_v[i];
    if (sum < bestsum) {
      bestsum = sum;
      res = i + 1;
    }
  }
  cout << res << '\n';
}
// int main() {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//
//   ll n, k;
//   cin >> n >> k;
//   vector<ll> h(n);
//   for (auto &x : h) cin >> x;
//
//   ll current_sum = 0;
//   for (int i = 0; i < k; ++i) current_sum += h[i];
//
//   ll min_sum = current_sum;
//   ll res = 0;
//
//   for (int i = k; i < n; ++i) {
//     current_sum += h[i] - h[i-k];
//     if (current_sum < min_sum) {
//       min_sum = current_sum;
//       res = i - k + 1;
//     }
//   }
//
//   cout << res + 1 << "\n"; // +1 porque pide 1-based
// }
