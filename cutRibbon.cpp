#include <bits/stdc++.h>
#define fore(i, a, b) for (int i = a; i < b; ++i)
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

int main() {
  FIN int n;
  vector<int> a(3);

  cin >> n >> a[0] >> a[1] >> a[2];

  sort(a.begin(), a.end());
  int res = 0;
  int m, l, q = 0;
  int i, j = 0;
  int k;
  for (i = 0; i < n && (n - (a[1] * i + a[2] * j) >= 0); i++) {
    for (j = 0; j < n && (n - (a[1] * i + a[2] * j) >= 0); j++) {
      if ((n - (a[1] * i + a[2] * j)) % a[0] == 0) {
        k = (n - (a[1] * i + a[2] * j)) / a[0];
        if (res < k + j + i) {
          res = k + j + i;
        }
      }
    }
    j = 0;
  }
  cout << res << "\n";

  return 0;
}
