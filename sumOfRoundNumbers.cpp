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
    int n, npapa;
    cin >> n;
    npapa = n;
    vector<int> a;
    int tam = 0;
    int i = 0;
    while (n) {
      if (n % 10 != 0) {
        tam++;
        a.push_back((n % 10) * pow(10, i));
      }
      n = n / 10;
      i++;
    }
    if (tam == 1) {
      cout << tam << endl;
      cout << npapa << endl;
    } else {
      cout << tam << endl;
      fore(j, 0, a.size()) {
        if (a[j] != 0)
          cout << a[j] << " ";
      }
      cout << endl;
    }
  }
}
