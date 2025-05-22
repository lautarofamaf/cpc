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
  ll n, q;
  cin >> n >> q;
  string str;
  cin >> str;
  ll a[n + 1];
  a[0] = 0;
  fore(i, 1, n + 1) { a[i] = a[i - 1] + (int)str[i - 1] - 96; }
  while (q--) {
    ll l, r;
    cin >> l >> r;
    cout << a[r] - a[l - 1] << '\n';
  }
}
