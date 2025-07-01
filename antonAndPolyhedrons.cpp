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
  int n;
  cin >> n;
  int res = 0;
  fore(i, 0, n) {
    string s;
    cin >> s;
    if (s == "Tetrahedron")
      res += 4;
    else if (s == "Cube")
      res += 6;
    else if (s == "Octahedron")
      res += 8;
    else if (s == "Dodecahedron")
      res += 12;
    else if (s == "Icosahedron")
      res += 20;
  }
  cout << res << endl;
}
