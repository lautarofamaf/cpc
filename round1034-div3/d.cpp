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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    string s;
    cin >> s;
    int unos = 0;
    fore(i, 0, n) {
      if (s[i] == '1')
        unos++;
    }
    int islas = 0;
    int p = 0;
    int q = 0;
    int i = 0;
    while (i < n) {
      if (s[i] == '1') {
        p = i;
        q = p;
        while (s[q] == '1' && q < n) {
          q++;
        }
        islas++;
        i = q;
      }
      i++;
    }
    if (unos <= k) {
      cout << "Alice" << endl;
    } else {
      (islas < k) ? cout << "Alice" << endl : cout << "Bob" << endl;
    }
  }
}
// k=4
// 1011011
// 0010010
// 1111000
// 0000000
// MENOR STRICTO ALICIA MENORM,AYOR IGUAL BOB
// k=3
// 11011011
// 01010010
// 01010111
// 00010001
// 11110001
// 00010001
//
