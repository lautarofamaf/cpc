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
  int n, m;
  cin >> n >> m;
  fore(i, 0, n) {
    fore(j, 0, m) {
      if (i % 2 == 0) {
        cout << '#';
      } else {
        if (j == 0 && (i % 4 == 3)) {
          cout << '#';
        } else if (j == m - 1 && (i % 4 == 1)) {
          cout << '#';
        } else {
          cout << '.';
        }
      }
    }
    cout << endl;
    ;
  }
}
