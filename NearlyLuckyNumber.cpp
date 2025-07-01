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
  int ln = 0;
  fore(i, 0, s.size()) {
    if (s[i] == '4' || s[i] == '7') {
      ln++;
    }
  }
  if (ln == 0) {
    cout << "NO" << endl;
    return 0;
  }
  while (ln) {
    if (ln % 10 != 4 && ln % 10 != 7) {
      cout << "NO" << endl;
      return 0;
    }
    ln = ln / 10;
  }
  cout << "YES" << endl;
}
