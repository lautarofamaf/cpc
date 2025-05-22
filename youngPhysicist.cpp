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
  ll n;
  cin >> n;
  ll a[n][3];
  fore(i, 0, n) { cin >> a[i][0] >> a[i][1] >> a[i][2]; }
  ll temp = 0;
  fore(i, 0, 3) {
    fore(j, 0, n) { temp += a[j][i]; }
    if (temp != 0) {
      cout << "NO" << '\n';
      return 0;
    }
  }
  cout << "YES" << '\n';
}
