#include <bits/stdc++.h>
#define fore(i, a, b) for (int i = a; i < b; ++i)
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;
bool can(int mid, vector<int> &oc, int m) {
  ll task = 0;
  fore(i, 1, oc.size()) {
    if (oc[i] <= mid) {
      task += oc[i] + floor((mid - oc[i]) / 2);
    } else {
      task += mid;
    }
  }
  return task >= m;
}

int main() {
  FIN int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    vector<int> oc(n + 1, 0);

    fore(i, 0, m) {
      cin >> a[i];
      oc[a[i]]++;
    }
    int r = m * 2;
    int l = 1;
    int mid;
    int res = -1;
    while (l <= r) {
      int mid = (l + r) / 2;
      if (can(mid, oc, m)) {
        res = mid;
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
    cout << res << '\n';
  }

  return 0;
}
