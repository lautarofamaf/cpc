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
  vector<pair<ll, ll>> a(n);
  fore(i, 0, n) { cin >> a[i].first >> a[i].second; }
  ll minLap;
  sort(a.begin(), a.end());
  minLap = a[0].second;
  fore(i, 1, n) {
    if (minLap <= a[i].second) {
      minLap = a[i].second;
    } else {
      cout << "Happy Alex" << '\n';
      return 0;
    }
  }
  cout << "Poor Alex" << '\n';
}
