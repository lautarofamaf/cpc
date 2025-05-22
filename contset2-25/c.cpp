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
    vector<int> a(n);
    vector<int> b(n);
    int ceroA, ceroB;
    ceroA = 0;
    ceroB = 0;
    fore(i, 0, n) {
      cin >> a[i];
      if (a[i] == 0)
        ceroA++;
    }
    fore(i, 0, n) {
      cin >> b[i];
      if (a[i] == 0)
        ceroB++;
    }
    int unoA = n - ceroA;
    int unoB = n - ceroB;
    int pair0 = 0;
    int pair1 = 0;
    bool BOOLEANO = false;
    fore(i, 0, n) {
      if (a[i] == 0 && b[i] == 1)
        pair0++;
      if (a[i] == 1 && b[i] != 1)
        pair1++;
      if (pair0 > 0 && pair1 > 0) {
        pair0--;
        pair1--;
        BOOLEANO = true;
      }
    }
    int res = 0;
    while (pair0--) {
      res++;
    }
    while (pair1--) {
      res++;
    }
    if (BOOLEANO) {
      res++;
    }
    cout << res << endl;
  }
}
