#include <bits/stdc++.h>
#include <vector>
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
  int n, h;
  cin >> n;
  vector<pair<int, int>> a(n);
  int chuchu = 0;
  fore(i, 0, n) {
    cin >> a[i].first >> a[i].second;
    chuchu += a[i].first;
    if ((chuchu - a[i].second) < 0)
      chuchu = 0;
    else
      chuchu -= a[i].second;
  }
  cout << chuchu << endl;
}
