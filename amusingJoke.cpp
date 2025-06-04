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
  string s1, s2, s3;
  cin >> s1;
  cin >> s2;
  cin >> s3;
  string s = s1 + s2;
  if (s.size() != s3.size()) {
    cout << "NO" << '\n';
    return 0;
  }
  sort(ALL(s));
  sort(ALL(s3));
  fore(i, 0, s3.size()) {
    if (s3[i] != s[i]) {
      cout << "NO" << '\n';
      return 0;
    }
  }
  cout << "YES" << endl;
}
