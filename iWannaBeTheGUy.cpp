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
  int n, p, q;
  cin >> n >> p;
  vector<int> x(p);
  fore(i, 0, p) { cin >> x[i]; }
  cin >> q;
  vector<int> y(q);
  fore(i, 0, q) { cin >> y[i]; }
  set<int> s;
  fore(i, 0, p) { s.insert(x[i]); }
  fore(i, 0, q) { s.insert(y[i]); }
  (s.size() == n) ? cout << "I become the guy." << endl
                  : cout << "Oh, my keyboard!" << endl;
}
