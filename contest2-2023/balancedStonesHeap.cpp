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

bool can(vector<ll> h, ll M) {
  int n = h.size() - 1;
  vector<ll> b(n + 1);
  for (int i = n; i >= 3; i--) {
    if (b[i] + h[i] < M)
      return false;
    ll d = min(h[i], (h[i] + b[i] - M)) / 3;
    b[i - 1] += d;
    b[i - 2] += 2 * d;
  }
  return b[1] + h[1] >= M && b[2] + h[2] >= M;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<ll> h(n + 1);
    for (int i = 1; i <= n; i++)
      cin >> h[i];

    ll low = 1, high = 1e9, ans = 1;
    while (low <= high) {
      ll mid = (low + high) / 2;
      if (can(h, mid)) {
        ans = mid;
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }

    cout << ans << "\n";
  }
  return 0;
}
