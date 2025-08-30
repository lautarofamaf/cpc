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
    set<char> a;
    int res = 0;
    fore(i, 0, n) {
      if (a.count(s[i]) == 0) {
        a.insert(s[i]);
        res += 2;
      } else {
        res++;
      }
    }
    cout << res << '\n';
  }
}
