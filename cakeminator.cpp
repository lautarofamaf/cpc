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
  FIN int r, c;
  cin >> r >> c;
  int a[r][c];
  fore(i, 0, r) {
    fore(j, 0, c) {
      char s;
      cin >> s;
      if (s == '.') {
        a[i][j] = 0;
      } else if (s == 'S') {
        a[i][j] = 1;
      }
    }
  }
  bool b = true;
  int res = 0;
  int filamenos = 0;
  fore(i, 0, r) {
    b = true;
    fore(j, 0, c) {
      if (a[i][j] == 1) {
        b = false;
      }
    }
    if (b) {
      res += c;
      filamenos++;
    }
  }
  fore(i, 0, c) {
    b = true;
    fore(j, 0, r) {
      if (a[j][i] == 1) {
        b = false;
      }
    }
    if (b) {
      res += r - filamenos;
    }
  }
  cout << res << '\n';
  return 0;
}
