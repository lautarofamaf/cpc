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
    int n;
    cin >> n;
    int sum = 0;
    bool b = false;
    pair<int, int> res;
    fore(i, 0, n + 1) {

      if (i * i == n && !b) {
        b = true;
        res.first = i;
        res.second = 0;
      }
    }
    if (b)
      cout << res.first << " " << res.second << endl;
    else
      cout << -1 << endl;
  }
  return 0;
}
