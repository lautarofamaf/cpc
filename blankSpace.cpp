#include <bits/stdc++.h>
#include <vector>
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
    fore(i, 0, n) { cin >> a[i]; }
    int maxseg = 0;
    int ceros = 0;
    fore(i, 0, n) {
      if (a[i] == 0)
        ceros++;
      else
        ceros = 0;
      if (ceros >= maxseg)
        maxseg = ceros;
    }
    cout << maxseg << endl;
  }
}
