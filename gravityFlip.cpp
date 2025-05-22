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
  FIN;
  ll n, cubes;
  cin >> n;
  vector<ll> a(n);
  fore(i, 0, n) {
    cin >> cubes;
    a[i] = cubes;
  }
  sort(a.begin(), a.end());
  vector<ll> res(n);
  fore(i, 0, n) {
    res[i] = a[i];
    cout << res[i] << ' ';
  }
  cout << '\n';
}
