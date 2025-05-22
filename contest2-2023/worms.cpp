#include <algorithm>
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
  FIN int n, m;
  cin >> n;
  vector<int> a(n);
  fore(i, 0, n) { cin >> a[i]; }
  cin >> m;
  vector<int> b(m);
  fore(i, 0, m) { cin >> b[i]; }
  vector<int> label(n);
  label[0] = a[0];
  fore(i, 1, n) { label[i] = a[i] + label[i - 1]; }
  int res = 0;
  fore(i, 0, m) {
    res = lower_bound(ALL(label), b[i]) - label.begin();
    cout << res + 1 << '\n';
  }
}
