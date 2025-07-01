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
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    fore(i, 0, s.size()) { s[i] = tolower(s[i]); }
    string si = "yes";
    bool b = true;

    // fore(i, 0, s.size()) {
    //   if (s[i] != si[i]) {
    //     b = false;
    //   }
    // }
    // (b) ? cout << "YES" << endl : cout << "NO" << endl;
    (s == si) ? cout << "YES" << endl : cout << "NO" << endl;
  }
}
