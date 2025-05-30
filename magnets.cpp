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
  string last;
  int res = 0;
  cin >> last;

  n--;
  while (n--) {
    string s;
    cin >> s;
    if (s != last)
      res++;
    last = s;
  }
  cout << res + 1 << endl;
}
