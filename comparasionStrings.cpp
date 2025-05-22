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

    short come = 1;
    int max_mayor = 0;
    int max_menor = 0;
    int menor = 0;
    int mayor = 0;
    bool existmay = false;
    bool existmen = false;
    int i = 0;
    while (i < n) {
      while (s[i] == '<' && i < n) {
        i++;
        menor++;
        existmen = true;
      }
      if (max_menor <= menor)
        max_menor = menor;
      menor = 0;
      while (s[i] == '>' && i < n) {
        i++;
        mayor++;
        existmay = true;
      }
      if (max_mayor <= mayor)
        max_mayor = mayor;
      mayor = 0;
      // i++;
    }
    if (existmay && max_mayor == 0) {
      max_mayor++;
    }
    if (existmen && max_menor == 0) {
      max_menor++;
    }
    int res = max(max_mayor, max_menor);
    res++;
    cout << res << endl;
  }
}
