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
    vector<int> a(n);
    fore(i, 0, n) { a[i] = i; }
    bool b = true;
    if (n < 3) {
      cout << "Alice" << endl;
    } else {
      if (n % 4 == 0) {
        cout << "Bob" << endl;
      } else {
        cout << "Alice" << endl;
      }
    }
  }
}
