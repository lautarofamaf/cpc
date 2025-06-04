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
  string s;
  cin >> s;
  vector<pair<int, int>> a(s.size());
  fore(i, 0, a.size()) {
    char c;
    a[i].first = s[i];
    cin >> c;
    a[i].second = c;
  }
  fore(i, 0, a.size()) { cout << (a[i].first ^ a[i].second); }
  cout << endl;
}
