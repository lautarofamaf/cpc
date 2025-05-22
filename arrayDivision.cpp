#include <bits/stdc++.h>
#include <climits>
#define fore(i, a, b) for (int i = a; i < b; ++i)
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;
bool ispossible(ll m, const vector<ll> &a, ll k, ll n) {
  ll iteraciones = 1;
  ll sum = 0;
  fore(i, 0, n) {
    if (a[i] > m)
      return false;
    if (sum + a[i] > m) {
      sum = a[i];
      iteraciones++;
    } else {
      sum += a[i];
    }
  }
  return iteraciones <= k;
}
int main() {
  FIN;
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  fore(i, 0, n) cin >> a[i];

  ll l = 0, r = accumulate(ALL(a), 0LL);
  ll res = r;
  while (l <= r) {
    ll m = (l + r) / 2;
    if (ispossible(m, a, k, n)) {
      res = m;
      r = m - 1;
    } else {
      l = m + 1;
    }
  }
  cout << res << '\n';
  return 0;
}
