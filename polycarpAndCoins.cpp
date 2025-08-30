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
    int c1 = 0, c2 = 0;
    c1 = floor(n / 3);
    c2 = (n - c1) / 2;
    while (n - c1 - c2 * 2 > 0) {
      c1++;
    }
    cout << c1 << " " << c2 << endl;
  }
}
