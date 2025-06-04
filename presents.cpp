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
  fore(i, 0, n) {
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(ALL(a));
  fore(i, 0, n) { cout << a[i].second + 1 << " "; }
  cout << endl;
}
