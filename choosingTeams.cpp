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
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  fore(i, 0, n) { cin >> a[i]; }
  sort(ALL(a));
  int i = 0;
  int res = 0;
  while (i < n - 2) {
    if (a[i] + k <= 5 && a[i + 1] + k <= 5 && a[i + 2] + k <= 5)
      res++;
    i += 3;
  }
  cout << res << endl;
}
