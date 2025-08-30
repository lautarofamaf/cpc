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
  int res = 0;
  int i = 1;
  int necesaryNext = 1;
  while (n >= necesaryNext) {
    n -= necesaryNext;
    res++;
    i++;
    necesaryNext = i * (i + 1) / 2;
  }
  cout << res << endl;
}
