#include <bits/stdc++.h>
#include <numeric>
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
    vector<int> doses;
    vector<int> unos;
    fore(i, 0, n) {
      cin >> a[i];
      if (a[i] == 2)
        doses.push_back(a[i]);
      else
        unos.push_back(a[i]);
    }
    if (doses.size() % 2 == 0) {
      if (unos.size() % 2 == 0) {
        cout << "YES" << '\n';
      } else
        cout << "NO" << '\n';
    } else {
      if (unos.size() > 0) {
        if (unos.size() % 2 == 0) {
          cout << "YES" << '\n';
        } else
          cout << "NO" << '\n';
      } else {
        cout << "NO" << '\n';
      }
    }
  }
}
