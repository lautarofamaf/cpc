
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
  vector<ll> a(n);
  fore(i, 0, n) { cin >> a[i]; }
  sort(a.begin(), a.end(), greater<ll>());
  ll acum = a[0];
  ll remainer = 0;
  fore(i, 1, n) { remainer += a[i]; }
  ll i = 1;
  while (acum <= remainer) {
    acum += a[i];
    remainer -= a[i];
    i++;
  }
  cout << i << '\n';
}
