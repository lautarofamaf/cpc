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
  FIN int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    fore(i, 0, n) { cin >> a[i].first; }
    fore(i, 0, n) { cin >> a[i].second; }
    sort(ALL(a));
    int res = k;
    fore(i, 0, n) {
      if (k >= a[i].first) {
        res += a[i].second;
        k += a[i].second;
      }
    }
    cout << res << '\n';
  }
}
