#include <bits/stdc++.h>
#include <climits>
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
    int minum = n;
    int maxum = -1;
    fore(i, 0, n) { cin >> a[i]; }
    vector<char> res(n, '0');
    int current_min = INT_MAX;
    fore(i, 0, n) {
      if (a[i] < current_min) {
        current_min = a[i];
        res[i] = '1';
      }
    }

    int current_max = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
      if (a[i] > current_max) {
        current_max = a[i];
        res[i] = '1';
      }
    }
    fore(i, 0, n) { cout << res[i]; }
    cout << endl;
  }
}
