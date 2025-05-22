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
  FIN int a, b, c, d;
  int t;
  cin >> t;
  int n = 4;
  vector<int> ar(n);
  while (t--) {
    cin >> a >> b >> c >> d;
    ar[0] = a;
    ar[1] = b;
    ar[2] = c;
    ar[3] = d;
    sort(ar.begin(), ar.end());
    fore(i, 0, n) {
      if (a == ar[i]) {
        cout << n - i - 1 << '\n';
      }
    }
  }
  return 0;
}
