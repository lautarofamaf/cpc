#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

bool can(int k, const vector<pii> &ab) {
  int cnt = 0;
  // Recorremos en orden de riqueza creciente (i = 1..n)
  for (int i = 0; i < (int)ab.size(); ++i) {
    int a = ab[i].first;
    int b = ab[i].second;
    // Queremos que, si le invitamos ahora, haya ≤a ricos (quedarían k-1-cnt)
    // y ≤b pobres (ya hay cnt)
    if (a >= (k - 1 - cnt) && b >= cnt) {
      cnt++;
      if (cnt == k)
        return true;
    }
  }
  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<pii> ab(n);
    for (int i = 0; i < n; ++i) {
      cin >> ab[i].first >> ab[i].second;
    }

    // Binaria sobre el número de invitados k
    int lo = 0, hi = n + 1;
    while (lo + 1 < hi) {
      int mid = lo + (hi - lo) / 2;
      if (can(mid, ab))
        lo = mid;
      else
        hi = mid;
    }

    cout << lo << "\n";
  }
  return 0;
}
