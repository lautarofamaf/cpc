#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#define fore(i, a, b) for (int i = a, _b = (b); i < _b; ++i) // FIXED
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

int contarUnos(string m) {
  int count = 0;
  fore(i, 0, m.size()) { m[i] == '1' ? count++ : count = count; }
  return count;
}

string flipRango(string m, int i, int j) {
  string str = m;
  fore(k, i, j + 1) { str[k] = (m[k] == '0' ? '1' : '0'); }
  return str;
}

int main() {
  FIN;
  int n;
  cin >> n;
  vector<int> s(n);
  string a = "";
  fore(i, 0, n) { cin >> s[i]; }
  fore(i, 0, n) {
    if (s[i] == 1)
      a += '1';
    else
      a += '0';
  }

  int dp[n + 2][n + 2];
  // buildTable dp

  dp[n][n] = contarUnos(flipRango(a, n, n));
  for (int i = n - 1; i >= 0; i--) {
    for (int j = n - 1; j >= 0; j--) {
      if (i < j && j == n) {
        dp[i][j] = max(contarUnos(a), contarUnos(flipRango(a, i, j)));
      }
      if (i >= j && j + 1 < n) {
        dp[i][j] = max(contarUnos(a), contarUnos(flipRango(a, i, j + 1)));
      }
      if (i < j && j + 1 < n && i + 1 < n) {
        dp[i][j] = max(contarUnos(a), max(contarUnos(flipRango(a, i + 1, j)),
                                          contarUnos(flipRango(a, i, j + 1))));
      }
    }
  }
  cout << dp[0][0] << endl;
}
// f(bitArr,i,j) // calcula la maxima cantidad de unos partiendo a flipear
// desde el rango i j
//   | i <  j && j >= n = max (
//                              ContarUnos( bitArr),
//                              ContarUnos( flipRango(BitArr,i+1,j) )
//                            )
//   | i >= j && j <  n = max (
//                              ContarUnos( bitArr),
//                              ContarUnos( flipRango(BitArr,i,j+1) )
//                            )
//   | i <  j && j <  n = max (
//                              ContarUnos ( bitArr ),
//                              ContarUnos ( f(bitArr,i  ,j+1) ),
//                              ContarUnos ( f(bitArr,i+1,j  ) ),
//                        )
