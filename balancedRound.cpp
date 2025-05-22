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
    int n;
    cin >> n;
    vector<ll> a(n);
    ll k;
    cin >> k;
    fore(i, 0, n) cin >> a[i];
    ll segm = 1;
    ll maxsegm = 1;
    sort(ALL(a));
    int i = 0;
    while (i < n - 1) {
      if (a[i + 1] - a[i] <= k) {
        segm++;
      } else {
        segm = 1;
      }
      maxsegm = max(segm, maxsegm);
      i++;
    }
    int res = n - maxsegm;
    cout << res << endl;
  }
}
