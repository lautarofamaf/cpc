
#include <bits/stdc++.h>
#include <cctype>
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
  string s;
  cin >> s;
  string target = "hello";
  int j = 0;
  for (char c : s) {
    if (c == target[j])
      j++;
    if (j == target.size())
      break;
  }
  cout << (j == target.size() ? "YES" : "NO") << '\n';
}
// int main() {
//   FIN;
//   int res = 0;
//   string str;
//   cin >> str;
//   fore(i, 0, str.size()) {
//     if (str[i] == 'h') {
//       i++;
//       while (i < str.size() && str[i] == 'h') {
//         i++;
//       }
//       if (i < str.size() && str[i] == 'e') {
//         i++;
//         while (i < str.size() && str[i] == 'e') {
//           i++;
//         }
//         if (i < str.size() && str[i] == 'l' && str[i + 1] == 'l') {
//           i += 2;
//           while (i < str.size() && str[i] == 'l') {
//             i++;
//           }
//           if (i < str.size() && str[i] == 'o') {
//             i++;
//
//             cout << "YES" << '\n';
//             return 0;
//           }
//         }
//       }
//     }
//   }
//   cout << "NO" << '\n';
// }
