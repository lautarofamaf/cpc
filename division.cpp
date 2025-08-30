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
    int x;
    cin >> x;
    if (x >= 1900)
      cout << "Division 1" << endl;
    if (x <= 1899 && x >= 1600)
      cout << "Division 2" << endl;
    if (x <= 1599 && x >= 1400)
      cout << "Division 3" << endl;
    if (x <= 1399)
      cout << "Division 4" << endl;
  }
}
