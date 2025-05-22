
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
  string str1, str2;
  cin >> str1;
  cin >> str2;
  for (int i = 0; i < str1.size(); i++) {
    str1[i] = tolower(str1[i]);
  }
  for (int i = 0; i < str2.size(); i++) {
    str2[i] = tolower(str2[i]);
  }
  if (str1.compare(str2) == 0) {
    cout << 0 << "\n";
  } else if (str1.compare(str2) < 0) {
    cout << -1 << "\n";
  } else {
    cout << 1 << "\n";
  }
}
