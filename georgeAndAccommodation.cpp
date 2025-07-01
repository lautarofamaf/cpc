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
  vector<int> b(n);
  fore(i, 0, n) { cin >> a[i] >> b[i]; }
  int res = 0;
  fore(i, 0, n) {
    if (a[i] + 2 <= b[i])
      res++;
  }
  cout << res << endl;
}
