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
  ll n, t;
  cin >> t;
  while (t--) {
    ll h, m;
    cin >> h >> m;
    ll mRem = 60 - m;
    ll hRem = 23 - h;
    mRem += 60 * hRem;
    cout << mRem << '\n';
  }
}
