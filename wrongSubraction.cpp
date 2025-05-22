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
  int n, k;
  cin >> n >> k;
  while (k--) {
    if (n % 10 == 0) {
      n = n / 10;
    } else {
      n--;
    }
  }
  cout << n << '\n';
}
