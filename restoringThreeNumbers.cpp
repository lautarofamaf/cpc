#include <bits/stdc++.h>
#include <iterator>
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
  int n = 4;
  vector<int> v(n);
  fore(i, 0, 4) { cin >> v[i]; }
  sort(ALL(v));
  int a, b, c;
  a = (v[0] - v[2]) + v[1];
  b = (v[2] - v[1]) + v[0];
  c = (v[1] - v[0]) + v[2];
  cout << a / 2 << " " << b / 2 << " " << c / 2 << endl;
}

// 3 4 5 |6
// a+b
// a+c
// b+c
