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
  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d;
    int n = 4;
    vector<int> v(n);
    fore(i, 0, 4) { cin >> v[i]; }
    a = v[0];
    b = v[1];
    c = v[2];
    d = v[3];
    sort(ALL(v));
    bool fair = false;
    if ((a == v[2] || b == v[2]) && (c == v[3] || d == v[3]) ||
        (d == v[2] || c == v[2]) && (b == v[3] || a == v[3])) {
      fair = true;
    }
    fair ? cout << "YES" << endl : cout << "NO" << endl;
  }
}
