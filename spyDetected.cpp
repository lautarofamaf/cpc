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
    fore(i, 0, n) { cin >> a[i]; }
    if (a[0] == a[1]) {
      fore(i, 2, n) {
        if (a[i] != a[1]) {
          cout << i + 1 << endl;
        }
      }

    } else {
      if (a[2] == a[0]) {
        cout << 2 << endl;
      } else {
        cout << 1 << endl;
      }
    }
  }
}
