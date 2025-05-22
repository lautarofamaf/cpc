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
  string str;
  cin >> str;
  int i = 1;
  while (k > 0 && i <= n) {
    if (n == 1) {
      str[0] = '0';
      cout << str << '\n';
      return 0;
    }
    if (str[0] != '1') {
      str[0] = '1';
      k--;
    }
    if (k > 0) {
      if (str[i] != '0') {
        str[i] = '0';
        i++;
        k--;
      } else {
        i++;
      }
    }
  }
  cout << str << '\n';
}
// int main() {
//   FIN;
//   int n, k;
//   cin >> n >> k;
//   string str;
//   cin >> str;
//
//   for (int i = 0; i < n && k > 0; i++) {
//     char target = (i == 0 ? '1' : '0');
//     if (str[i] != target) {
//       str[i] = target;
//       k--;
//     }
//   }
//   cout << str << '\n';
// }
