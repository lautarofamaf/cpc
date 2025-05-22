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

int main() {
  FIN;
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (n < 26) {
    cout << "NO" << '\n';
    return 0;
  }

  set<char> alp;
  fore(i, 0, n) { alp.insert(tolower(s[i])); }
  if (alp.size() == 26) {
    cout << "YES" << '\n';
    return 0;
  } else {
    cout << "NO" << '\n';
    return 0;
  }
}
