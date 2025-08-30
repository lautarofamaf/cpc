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
    int res = 0;
    if (s[0] == 'a')
      res++;
    if (s[1] == 'b')
      res++;
    if (s[2] == 'c')
      res++;
    (res != 0) ? cout << "YES" << endl : cout << "NO" << '\n';
  }
}
