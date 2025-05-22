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
  int n;
  cin >> n;
  pair<ll, set<ll>> p;
  vector<pair<ll, bool>> a(n);
  fore(i, 0, n) {
    cin >> a[i].first;
    a[i].second = true;
  }
  sort(a.begin(), a.end());
  int res = n;
  fore(i, 0, n) {
    fore(j, i + 1, n) {
      if (a[i].first < a[j].first && a[j].second) {
        a[j].second = false;
        res--;
        break;
      }
    }
  }
  cout << res << '\n';
}
