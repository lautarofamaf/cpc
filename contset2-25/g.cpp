#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>
#define fore(i, a, b) for (int i = a, _b = (b); i < _b; ++i)
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

bool can(int mid, vector<int> a, int k) {
  // si encuentro una mediana mayor a mid --> true
  // si k=4 -> (k+1)/2 = 2 -> busco el 2do mas chico
  vector<int> b(a.size());
  fore(i, 0, b.size()) { b[i] = (a[i] >= mid ? 1 : -1); }
  vector<int> sum(a.size() + 1, 0);
  fore(i, 0, b.size()) { sum[i + 1] = sum[i] + b[i]; }

  int minsum = 0;
  fore(i, k, a.size() + 1) {
    minsum = min(sum[i - k], minsum);
    if (sum[i] - minsum > 0)
      return true;
  }
  return false;
}

int main() {
  FIN;
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  fore(i, 0, n) { cin >> a[i]; }
  // vvvvvvvvvvffffffff
  // l                r
  //          rl
  int res = 1;
  int l = 0, r = n;
  while (l <= r) {
    int mid = (l + r) / 2;
    if (can(mid, a, k)) {
      res = mid;
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  cout << res << "\n";
}
