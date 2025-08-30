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
    int mid = n / 2;
    if (mid % 2 != 0) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
      int sumid = 0;
      fore(i, 1, mid + 1) {
        sumid += 2 * i;
        cout << 2 * i << " ";
      }
      int suimp = 0;
      fore(i, 0, mid - 1) {
        suimp += 2 * i + 1;
        cout << 2 * i + 1 << " ";
      }
      cout << sumid - suimp << endl;
    }
  }
}
