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
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  fore(i, 0, m) { cin >> a[i]; }
  int res = 0;
  int min = INT_MAX;
  sort(a.begin(), a.end());
  fore(i, 0, m - n + 1) {
    if (abs(a[i] - a[n + i - 1]) < min) {
      min = abs(a[i] - a[n + i - 1]);
    }
  }
  cout << min << '\n';
}
