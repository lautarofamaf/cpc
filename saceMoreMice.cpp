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
  int t;
  cin >> t;
  while (t--) {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(k);
    fore(i, 0, k) { cin >> a[i]; }
    sort(ALL(a));
    ll cat = 0;
    ll res = 0;
    for (int i = k - 1; i >= 0; i--) {
      if (cat < a[i]) {
        while (a[i] < n) {
          cat++;
          a[i]++;
        }
        res++;
      }
    }
    cout << res << endl;
  }
}
