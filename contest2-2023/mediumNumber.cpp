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
  FIN int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    int n = 3;
    vector<int> ar(n);
    fore(i, 0, 3) { cin >> ar[i]; }
    sort(ar.begin(), ar.end());
    cout << ar[1] << '\n';
  }
}
