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
  vector<pair<int, int>> a(n);
  fore(i, 0, n) { cin >> a[i].first >> a[i].second; }
  multiset<int> local;
  multiset<int> visitante;
  fore(i, 0, n) {
    local.insert(a[i].first);
    visitante.insert(a[i].second);
  }
  int res = 0;
  set<int> vistos;
  fore(i, 0, n) {
    if (vistos.count(a[i].first) == 0) {
      res += local.count(a[i].first) * visitante.count(a[i].first);
    }
    vistos.insert(a[i].first);
  }
  cout << res << endl;
}
