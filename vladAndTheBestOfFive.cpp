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

    string s;
    cin >> s;
    int as = 0, bs = 0;
    fore(i, 0, s.size()) {
      if (s[i] == 'A')
        as++;
      else
        bs++;
    }
    as > bs ? cout << 'A' << endl : cout << 'B' << endl;
  }
}
