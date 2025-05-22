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
  ll n, m;
  cin >> n >> m;
  vector<ll> a(m), l(n, 0);
  fore(i, 0, m) { cin >> a[i]; }
  vector<ll> ones;
  ll cuentita = 0;
  fore(i, 0, m) {
    if (l[a[i] - 1] == 0) {
      cuentita++;
    }
    l[a[i] - 1]++;
    bool b = true;
    fore(j, 0, n) {
      if (l[j] < 1) {
        b = false;
        break;
      }
    }
    if (cuentita == n) {
      cuentita = 0;
      fore(i, 0, n) {
        l[i]--;
        if (l[i] != 0)
          cuentita++;
      }
      ones.push_back(i);
    }
  }
  ll i = 0;
  fore(j, 0, m) {
    if (ones.size() > 0 && ones[i] == j) {
      i++;
      cout << 1;
    } else {
      cout << 0;
    }
  }
  cout << '\n';
}
