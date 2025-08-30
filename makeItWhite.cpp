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
    cin >> n;
    string s;
    cin >> s;
    int first = 0;
    fore(i, 0, n) {
      if (s[i] == 'B') {
        first = i;
        break;
      }
    }
    int last = 0;
    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == 'B') {
        last = i;
        break;
      }
    }
    cout << last - first + 1 << endl;
  }
}
