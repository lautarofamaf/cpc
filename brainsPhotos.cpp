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
  char a[n][m];
  bool color = true;
  fore(i, 0, n) {
    fore(j, 0, m) {
      cin >> a[i][j];
      if (a[i][j] != 'B' && a[i][j] != 'W' && a[i][j] != 'G') {
        color = false;
      }
    }
  }
  color ? cout << "#Black&White" << endl : cout << "#Color" << endl;
}
