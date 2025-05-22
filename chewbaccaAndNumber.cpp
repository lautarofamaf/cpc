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
  FIN string n;
  cin >> n;
  fore(i, 0, n.size()) {
    int charnum = n[i] - '0';

    if (charnum >= 5 && !(i == 0 && charnum == 9)) {
      charnum = 9 - charnum;
    }
    n[i] = charnum + '0';
  }
  cout << n << endl;
}
