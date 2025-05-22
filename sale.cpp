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
  vector<int> a(n);
  fore(i, 0, n) { cin >> a[i]; }
  sort(ALL(a));
  int sumax = 0;
  fore(i, 0, m) {
    if (a[i] > 0) {
      break;
    } else {
      sumax = sumax - a[i];
    }
  }
  sumax = abs(sumax);
  cout << sumax << '\n';
}
