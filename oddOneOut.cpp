#include <bits/stdc++.h>
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

int main() {
  FIN;
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a != b && a != c) {
      cout << a << endl;
    }
    if (b != a && b != c) {
      cout << b << endl;
    }
    if (c != a && c != b) {
      cout << c << endl;
    }
  }
}
