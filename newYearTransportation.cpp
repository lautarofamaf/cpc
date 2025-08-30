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
  int n, t;
  cin >> n >> t;
  vector<int> a(n, 0);
  fore(i, 1, n) { cin >> a[i]; }
  bool b = true;
  int i = 1;
  int res = false;
  if (i == t) {
    res = true;
    b = false;
  }
  while (b && i <= t) {
    if (i + a[i] == t) {
      b = false;
      res = true;
    } else {
      i += a[i];
    }
  }
  res ? cout << "YES" << endl : cout << "NO" << endl;
}
