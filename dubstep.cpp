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
  string u = "";
  bool firstWord = true;
  int i = 0;
  while (i < s.size()) {
    while (i + 2 < s.size() && s[i] == 'W' && s[i + 1] == 'U' &&
           s[i + 2] == 'B') {
      i += 3;
    }
    if (!firstWord) {
      u += " ";
    }

    while (i < s.size() && !(i + 2 < s.size() && s[i] == 'W' &&
                             s[i + 1] == 'U' && s[i + 2] == 'B')) {
      u += s[i];
      i++;
    }

    firstWord = false;
  }
  cout << u << '\n';
}
