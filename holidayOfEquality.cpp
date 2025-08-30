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
  int n;
  cin >> n;
  vector<int> a(n);
  fore(i, 0, n) { cin >> a[i]; }
  int res = 0;
  sort(ALL(a));
  fore(i, 0, n - 1) { res += a[n - 1] - a[i]; }
  cout << res << endl;
}
