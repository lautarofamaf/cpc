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
    int n, j, k;
    cin >> n >> j >> k;
    vector<int> a(n);
    fore(i, 0, n) { cin >> a[i]; }
    int jpapa = a[j - 1];
    int fuerzinha = 0;
    fore(i, 0, n) {
      if (a[i] > jpapa) {
        fuerzinha++;
      }
    }
    if (k == 1) {
      cout << (fuerzinha == 0 ? "YES\n" : "NO\n");
    } else {
      cout << "YES\n";
    }
  }
}
