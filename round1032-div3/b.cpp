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
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    bool bo = false;

    for (int i = 1; i < n - 1; ++i) {
      char b = s[i];
      string ac = s.substr(0, i) + s.substr(i + 1);

      if (ac.find(b) != string::npos) {
        bo = true;
        break;
      }
    }

    cout << (bo ? "Yes" : "No") << '\n';
  }
}
