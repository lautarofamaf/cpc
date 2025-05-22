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
  FIN int n, k;
  string s;
  cin >> n >> k >> s;
  vector<int> a(k, 0);
  fore(i, 0, n) { a[s[i] - 65]++; }
  int min, it;
  it = 0;
  min = INT_MAX;
  fore(i, 0, k) {
    if (a[i] < min) {
      min = a[i];
    }
    if (a[i] == 0) {
      cout << 0 << '\n';
      return 0;
    }
  }
  cout << min * k << '\n';
  return 0;
}
