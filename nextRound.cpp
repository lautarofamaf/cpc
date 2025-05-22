#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n;
  cin >> k;
  int a[n];
  int acum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    if (a[i] != 0) {
      if (a[i] >= a[k - 1]) {
        acum++;
      }
    }
  }
  // acum = a + n - lower_bound(a, a + n, k);
  // acum = lower_bound(a, a + n, k) - a;
  cout << acum << "\n";
}
