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
  int x1, x2, x3;
  int n = 3;
  vector<int> a(n);
  cin >> a[0] >> a[1] >> a[2];
  sort(ALL(a));
  int res = (a[1] - a[0]) + abs(a[1] - a[2]);
  cout << res << endl;
}
