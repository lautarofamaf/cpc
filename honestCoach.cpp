#include <bits/stdc++.h>
#include <climits>
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
    int n;
    cin >> n;
    vector<int> a(n);
    fore(i, 0, n) { cin >> a[i]; }
    sort(ALL(a));
    int res = INT_MAX;
    fore(i, 0, n - 1) {
      if (a[i + 1] - a[i] < res) {
        res = a[i + 1] - a[i];
      }
    }
    cout << res << endl;
  }
}
