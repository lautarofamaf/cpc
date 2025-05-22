#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n_shoops;
  cin >> n_shoops;
  long long xi[n_shoops];
  for (int i = 0; i < n_shoops; i++) {
    cin >> xi[i];
  }
  long long q;
  cin >> q;
  long long mi[q];
  for (int i = 0; i < q; i++) {
    cin >> mi[i];
  }
  long long acum[q];
  sort(xi, xi + n_shoops);
  for (int i = 0; i < q; i++) {
    acum[i] = 0;
  }
  for (int i = 0; i < q; i++) {
    acum[i] = upper_bound(xi, xi + n_shoops, mi[i]) - xi;
  }

  for (int i = 0; i < q; i++) {
    cout << acum[i] << "\n";
  }
}
