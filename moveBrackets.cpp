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
  int t, n;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    int aper, cer;
    aper = 0;
    cer = 0;
    int res = 0;
    int i = 0;
    int par = 0;
    while (s[i] == ')' && i < n) {
      i++;
    }
    while (i < n) {
      if (s[i] == '(') {
        aper++;
      } else {
        if (aper == 0) {
        } else {
          aper--;
          par++;
        }
      }
      i++;
    }
    if (n != 2) {
      res = (n - par * 2) / 2;
    } else {
      res = (n - par) / 2;
    }
    cout << res << '\n';
  }
}
