#include <bits/stdc++.h>
#define fore(i, a, b) for (int i = a, _b = (b); i < _b; ++i) // FIXED
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

string getOriginalChar(char typed, const char *row, int shift) {
  for (int i = 0; i < 10; ++i) {
    if (typed == row[i]) {
      string s = "";
      s.push_back(row[i + shift]);
      return s;
    }
  }
  return ""; // nunca llega, garantizado por el enunciado
}

int main() {
  FIN;
  char c;
  string str;
  cin >> c >> str;
  char a1[10] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
  char a2[10] = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'};
  char a3[10] = {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};
  if (c == 'R') {
    fore(i, 0, str.size()) {
      cout << getOriginalChar(str[i], a1, -1) << getOriginalChar(str[i], a2, -1)
           << getOriginalChar(str[i], a3, -1);
    }
  } else {
    fore(i, 0, str.size()) {
      cout << getOriginalChar(str[i], a1, 1) << getOriginalChar(str[i], a2, 1)
           << getOriginalChar(str[i], a3, 1);
    }
  }
  cout << '\n';
  return 0;
}
// int main() {
//   FIN;
//   char c;
//   string str;
//   cin >> c >> str;
//   char a1[10] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
//   char a2[10] = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'};
//   char a3[10] = {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};
//   if (c == 'R') {
//     fore(i, 0, str.size()) {
//       fore(j, 0, 10) {
//         if (str[i] == a1[j]) {
//           cout << a1[(j - 1) % 10];
//           break;
//         }
//       }
//       fore(j, 0, 10) {
//         if (str[i] == a2[j]) {
//           cout << a2[(j - 1) % 10];
//           break;
//         }
//       }
//       fore(j, 0, 10) {
//         if (str[i] == a3[j]) {
//           cout << a3[(j - 1) % 10];
//           break;
//         }
//       }
//     }
//   } else {
//     fore(i, 0, str.size()) {
//       fore(j, 0, 10) {
//         if (str[i] == a1[j]) {
//           cout << a1[(j + 1) % 10];
//           break;
//         }
//       }
//       fore(j, 0, 10) {
//         if (str[i] == a2[j]) {
//           cout << a2[(j + 1) % 10];
//           break;
//         }
//       }
//       fore(j, 0, 10) {
//         if (str[i] == a3[j]) {
//           cout << a3[(j + 1) % 10];
//           break;
//         }
//       }
//     }
//   }
//   cout << '\n';
//   return 0;
// }
