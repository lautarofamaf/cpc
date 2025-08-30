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
    int a, b;
    cin >> a >> b;
    int res = 0;
    res = abs(b - a);
    if (res > 10) {
      int resviejo = res;
      res = res / 10;
      if (resviejo % 10 != 0) {
        res++;
      }
    } else if (res == 0) {
      res = 0;
    } else {

      res = 1;
    }
    cout << res << endl;
  }
}
