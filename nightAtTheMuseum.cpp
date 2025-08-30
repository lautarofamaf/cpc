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
  int rotpapa = 0;
  char state = 'a';

  fore(i, 0, s.size()) {
    int diff = abs(s[i] - state);
    int move = min(diff, 26 - diff);
    rotpapa += move;
    state = s[i];
  }
  cout << rotpapa << endl;
}
