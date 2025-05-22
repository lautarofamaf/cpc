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
  int res = 0;
  string str;
  cin >> str;
  bool b = true;
  vector<char> a;
  fore(i, 0, str.size()) {
    b = true;
    fore(j, i + 1, str.size()) {
      if (str[i] == str[j]) {
        b = false;
        break;
      }
    }
    if (b) {
      a.push_back(str[i]);
    }
  }
  if (a.size() % 2 == 0) {
    cout << "CHAT WITH HER!" << '\n';
  } else {
    cout << "IGNORE HIM!" << '\n';
  }
}
// CON SETS ES MUCHO MEJOR
// set<char> letras; // almacena letras distintas
// for (char c : str) {
//   letras.insert(c);
// }
//
// if (letras.size() % 2 == 0) {
//   cout << "CHAT WITH HER!" << '\n';
// } else {
//   cout << "IGNORE HIM!" << '\n';
// }
