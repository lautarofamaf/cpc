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
    int n, k, j;
    cin >> n >> j >> k;
    vector<int> a(n);
    fore(i, 0, n) { cin >> a[i]; }
    int weakplayers = 0;
    fore(i, 0, n) {
      if (i != j && a[i] <= a[j])
        weakplayers++;
    }
    (weakplayers > n - k) ? cout << "YES" << endl : cout << "NO" << endl;
  }
}
