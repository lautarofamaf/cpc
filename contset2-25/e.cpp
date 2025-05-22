#include <algorithm>
#include <bits/stdc++.h>
#define fore(i, a, b) for (int i = a, _b = (b); i < _b; ++i)
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

bool can(int mid, vector<pair<int, int>> &a) {
  int lo = 0, hi = 0;
  fore(i, 0, a.size()) {
    lo = max(a[i].first, lo - mid);
    hi = min(a[i].second, hi + mid);
    if (lo > hi)
      return false;
  }
  return true;
}

int main() {
  FIN;
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    fore(i, 0, n) { cin >> a[i].first >> a[i].second; }

    // fffffffffvvvvvvvvv
    // l                r
    //         rl
    int res = 0;
    int l = 0, r = 1e9;
    while (l <= r) {
      int mid = (l + r) / 2;
      if (can(mid, a)) {
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
    cout << l << "\n";
  }
}
