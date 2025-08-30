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
    int odd = 0;
    fore(i, 0, n) {
      cin >> a[i];
      if (a[i] % 2 == 1)
        odd++;
    }
    (odd % 2 == 0) ? cout << "YES" << endl : cout << "NO" << endl;
  }
}
