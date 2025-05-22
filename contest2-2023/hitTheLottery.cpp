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
  FIN ll n;
  cin >> n;
  int res = 0;
  while (n >= 100) {
    n -= 100;
    res++;
  }
  while (n >= 20) {
    n -= 20;
    res++;
  }
  while (n >= 10) {
    n -= 10;
    res++;
  }
  while (n >= 5) {
    n -= 5;
    res++;
  }
  while (n >= 1) {
    n -= 1;
    res++;
  }
  cout << res << '\n';
}
