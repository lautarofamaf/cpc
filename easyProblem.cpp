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
    int a = 0, b = 0;
    int res = 0;
    fore(i, 0, 101) {
      fore(j, 0, 101) {
        if (i == n - j) {
          res++;
        }
      }
    }
    cout << res - 2 << endl;
  }
}
