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
    vector<int> a;
    fore(i, 0, n) {
      string s;
      cin >> s;
      fore(j, 0, 4) {
        if (s[j] == '#') {
          a.push_back(j + 1);
        }
      }
    }
    for (int i = n - 1; i >= 0; i--)
      cout << a[i] << " ";
    cout << endl;
  }
}
