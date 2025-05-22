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
  int n, m;
  cin >> n >> m;
  if (n == m && n % 2 == 0) {
    cout << "Malvika" << '\n';
    return 0;
  } else if (n == m && n % 2 != 0) {
    cout << "Akshat" << '\n';
    return 0;
  }
  int inters = m * n;
  int i = 0;
  while (inters > 1) {
    inters -= m + n - 1;
    m--;
    n--;
    i++;
  }
  if (i % 2 == 0) {
    cout << "Malvika" << '\n';
    return 0;
  } else {
    cout << "Akshat" << '\n';
    return 0;
  }
}
