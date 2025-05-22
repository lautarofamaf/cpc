#include <bits/stdc++.h>
#define fore(i, a, b) for (int i = a, _b = (b); i < _b; ++i) // FIXED
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

bool can(int m) { return true; }
int main() {
  FIN;
  double n, l;
  cin >> n >> l;
  vector<double> a(n);
  fore(i, 0, n) { cin >> a[i]; }
  sort(ALL(a));
  double d = 0;
  double maxi = 0;
  fore(i, 0, n) { // es n-1
    d = a[i + 1] - a[i];
    if (d > maxi) {
      maxi = d;
    }
  }
  double res;
  res = max(maxi / (double)2, a[0]);
  res = max(res, l - a[n - 1]);
  std::cout << std::fixed << std::setprecision(9);
  cout << res << '\n';
}
