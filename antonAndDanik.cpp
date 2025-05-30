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
  string s;
  cin >> s;
  int hayD = 0, hayA = 0;
  fore(i, 0, n) {
    if (s[i] == 'D')
      hayD++;
    if (s[i] == 'A')
      hayA++;
  }
  if (hayD == hayA)
    cout << "Friendship" << '\n';
  else if (hayD > hayA)
    cout << "Danik" << '\n';
  else
    cout << "Anton" << '\n';
}
