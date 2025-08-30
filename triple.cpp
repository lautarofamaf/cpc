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
    multiset<int> s;
    fore(i, 0, n) {
      cin >> a[i];
      s.insert(a[i]);
    }
    int res = -1;
    for (int i = n - 1; i >= 0; i--) {
      if (s.count(a[i]) >= 3) {
        res = a[i];
        break;
      }
    }
    cout << res << endl;
  }
}
