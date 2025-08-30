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
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int m;
    cin >> m;
    string apendear;
    string orden;
    cin >> apendear;
    cin >> orden;
    fore(i, 0, m) {
      if (orden[i] == 'D') {
        s += apendear[i];
      } else {
        s.insert(0, 1, apendear[i]);
      }
    }
    cout << s << endl;
  }
}
