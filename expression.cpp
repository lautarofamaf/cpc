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
  int a, b, c;
  cin >> a >> b >> c;
  if (a == 1 && b == 1 && c == 1) {
    cout << 3 << '\n';
    return 0;
  }

  if (a != 1 && b != 1 && c != 1) {
    cout << a * b * c << '\n';
    return 0;
  }
  if (a == 1) {
    if (b == 1 && c != 1) {
      cout << 2 * c << '\n';
      return 0;
    }
    if (c == 1 && b != 1) {
      cout << 2 + b << '\n';
      return 0;
    } else {
      cout << (1 + b) * c << '\n';
      return 0;
    }
  } else if (b == 1) {
    if (c == 1 && a != 1) {
      cout << 2 * a << '\n';
      return 0;
    }
    if (a <= c) {
      cout << (1 + a) * c << '\n';
      return 0;
    }
    if (a > c) {
      cout << (1 + c) * a << '\n';
      return 0;
    }
  } else {
    if (b == 1 && a != 1) {
      cout << 2 * a << '\n';
      return 0;
    } else {
      cout << a * (b + 1) << '\n';
      return 0;
    }
  }
}
