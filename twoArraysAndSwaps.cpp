#include <bits/stdc++.h>
#include <vector>
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    fore(i, 0, n) { cin >> a[i]; }
    fore(i, 0, n) { cin >> b[i]; }
    sort(ALL(a));
    sort(ALL(b));
    int res = 0;
    int i = n - 1;
    int dif = n - k;
    while (k--) {
      if (b[i] > a[n - (i + 1)]) {
        res += b[i];
      } else {
        res += a[n - (i + 1)];
      }
      i--;
    }
    i = n - 1;
    while (dif--) {
      res += a[i];
      i--;
    }
    cout << res << endl;
  }
}
