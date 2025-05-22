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
  int n;
  cin >> n;
  set<string> s;
  while (n--) {
    string str;
    cin >> str;
    if (s.count(str) == 0) {
      s.insert(str);
      cout << "NO" << '\n';
    } else {
      cout << "YES" << '\n';
    }
  }
}
