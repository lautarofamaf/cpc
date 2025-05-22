#include <bits/stdc++.h>
#include <cctype>
#define fore(i, a, b) for (int i = a, _b = (b); i < _b; ++i) // FIXED
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

bool isEven(ll p) { return p % 2 == 0; }

int main() {
  FIN;
  string s;
  cin >> s;
  int l, u;
  l = 0;
  u = 0;

  for (char c : s) {
    if (islower(c)) {
      l++;
    } else {
      u++;
    }
  }
  if (u > l) {
    fore(i, 0, s.size()) { s[i] = toupper(s[i]); }
  } else {
    fore(i, 0, s.size()) { s[i] = tolower(s[i]); }
  }
  cout << s << '\n';
}
