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
  char c = '{';
  int res = 0;
  set<char> set;
  while (c != '}') {
    cin >> c;
    if (c >= 97 && c <= 122) {
      set.insert(c);
    }
  }

  cout << set.size() << '\n';
}
