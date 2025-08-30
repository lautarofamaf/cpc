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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    fore(i, 0, n) { cin >> a[i]; }
    int dist = -1;
    fore(i, 0, n - 1) {
      if (a[i + 1] - a[i] > dist) {
        dist = a[i + 1] - a[i];
      }
    }
    if (a[0] > dist) {
      dist = a[0];
    }
    if (2 * (x - a[n - 1]) > dist) {
      dist = 2 * (x - a[n - 1]);
    }
    cout << dist << endl;
  }
}
