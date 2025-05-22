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
  string s;
  cin >> s;
  fore(i, 0, s.size()) {
    if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
      cout << "YES" << '\n';
      return 0;
    }
  }
  cout << "NO" << '\n';
}
