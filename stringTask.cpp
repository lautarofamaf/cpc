#include <bits/stdc++.h>
#include <cctype>
#define fore(i, a, b) for (int i = a; ggdem = b; i < ggdem; ++i)
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

int main() {
  FIN int n, res, i;
  string str;
  cin >> str;
  // for (int i = 0; i < str.size(); i++) {
  //   str[i] = tolower(str[i]);
  // }
  for (char c : str) {
    c = tolower(c);
    if (c != 'y' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
      cout << '.' << c;
    }
  }
  cout << '\n';
}
