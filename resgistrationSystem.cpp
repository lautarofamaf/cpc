
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
  ll n;
  cin >> n;
  unordered_map<string, int> str;
  string s;
  fore(i, 0, n) {
    cin >> s;
    if (str[s] == 0) {
      cout << "OK\n";
    } else {
      cout << s << str[s] << '\n';
    }
    str[s]++;
  }
}
