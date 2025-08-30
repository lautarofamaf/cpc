#include <bits/stdc++.h>
#include <vector>
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
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(26);
    fore(i, 0, n) {
      while (s[i] == s[i + 1]) {
        i++;
      }
      a[s[i] - 'A']++;
    }
    // a[s[n - 1] - 'A']++;
    bool b = true;
    fore(i, 0, 26) {
      if (a[i] >= 2) {
        b = false;
        break;
      }
    }
    sort(ALL(a));
    bool found = true;
    fore(i, 0, 25) {
      if (a[i] != 0) {
        found = false;
      }
    }
    if (found && a[25] >= 1)
      b = true;
    b ? cout << "YES" << endl : cout << "NO" << endl;
  }
}
