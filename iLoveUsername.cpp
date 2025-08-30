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
  int n;
  cin >> n;
  vector<int> a(n);
  int maxA;
  int minA;
  cin >> maxA;
  minA = maxA;
  int res = 0;
  fore(i, 1, n) {
    cin >> a[i];
    if (a[i] > maxA && a[i] < minA) {
      maxA = a[i];
      minA = a[i];
      res++;
    } else if (a[i] > maxA) {
      maxA = a[i];
      res++;
    } else if (a[i] < minA) {
      minA = a[i];
      res++;
    }
  }
  cout << res << endl;
}
