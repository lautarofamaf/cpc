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
  string s, target;
  cin >> target;
  cin >> s;
  if (s.size() != target.size()) {
    cout << "NO" << '\n';
    return 0;
  }
  string revers = "";
  for (int i = target.size() - 1; i >= 0; i--) {
    revers += target[i];
  }
  fore(i, 0, s.size()) {
    if (s[i] != revers[i]) {

      cout << "NO" << '\n';
      return 0;
    }
  }
  cout << "YES" << '\n';
}
