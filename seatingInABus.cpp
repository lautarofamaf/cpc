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
    vector<int> b(n + 2, 0);
    b[a[0]] = 1;
    bool flag = true;
    fore(i, 1, n) {

      if (b[a[i] + 1] == 0 && b[a[i] - 1] == 0) {
        flag = false;
        break;
      } else {
        b[a[i]] = 1;
      }
    }
    cout << (flag ? "YES" : "NO") << '\n';
  }
}
