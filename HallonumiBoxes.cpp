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
    fore(i, 0, n) { cin >> a[i]; }
    if (k == 1) {
      if (is_sorted(a.begin(), a.end()))
        cout << "YES\n";
      else
        cout << "NO\n";
    } else {

      cout << "YES" << endl;
    }
  }
}
