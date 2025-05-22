#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (ll &x : a)
      cin >> x;

    ll total = accumulate(a.begin(), a.end(), 0LL);
    ll s = sqrtl(total); // sqrtl para evitar precision de double
    cout << (s * s == total ? "YES\n" : "NO\n");
  }
}
