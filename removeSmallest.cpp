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
    int n;
    cin >> n;
    vector<int> a(n);
    bool b = true;
    fore(i, 0, n) { cin >> a[i]; }
    sort(ALL(a));

    fore(i, 0, n - 1) {
      if (a[i + 1] - a[i] > 1) {
        b = false;
      }
    }
    (b) ? cout << "YES" << endl : cout << "NO" << endl;
  }
}
