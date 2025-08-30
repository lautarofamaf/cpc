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
    pair<int, int> pos;
    pos.first = 0;
    pos.second = 0;
    bool b = false;
    fore(i, 0, n) {
      if (s[i] == 'U') {
        pos.second++;
      } else if (s[i] == 'L') {
        pos.first--;
      } else if (s[i] == 'D') {
        pos.second--;
      } else {
        pos.first++;
      }
      if (pos.first == 1 && pos.second == 1) {
        b = true;
        break;
      }
    }
    b ? cout << "YES" << endl : cout << "NO" << endl;
  }
}
