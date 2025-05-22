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
  FIN int n;
  cin >> n;

  vector<int> a(n + 1);
  fore(i, 1, n + 1) cin >> a[i];

  vector<int> pref0(n + 1, 0), pref1(n + 1, 0);

  fore(i, 1, n + 1) {
    int expected0 = (i - 1) % 2;
    int expected1 = (i) % 2;

    pref0[i] = pref0[i - 1] + (a[i] != expected0);
    pref1[i] = pref1[i - 1] + (a[i] != expected1);
  }

  int q;
  cin >> q;
  while (q--) {
    int l, r;
    cin >> l >> r;
    int res = min(pref0[r] - pref0[l - 1], pref1[r] - pref1[l - 1]);
    cout << res << '\n';
  }
}
