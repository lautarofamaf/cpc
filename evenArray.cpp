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
    vector<int> a(n);
    int wOdd = 0;
    int wEven = 0;
    fore(i, 0, n) {
      cin >> a[i];
      if (i % 2 == 0 && a[i] % 2 != 0) {
        wEven++;
      }
      if (a[i] % 2 != 1 && i % 2 == 1) {
        wOdd++;
      }
    }
    int wrong = abs(wEven - wOdd);
    if (wrong > 0) {
      cout << -1 << endl;
    } else
      cout << wEven << endl;
  }
}
