#include <bits/stdc++.h>
#include <climits>
#include <cstdint>
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
  int minu = INT_MAX;
  int maxu = -1;
  int inmin = -1;
  int inmax = -1;
  fore(i, 0, n) {
    cin >> a[i];
    if (a[i] >= maxu) {
      maxu = a[i];
      inmax = i;
    }
    if (a[i] <= minu) {
      minu = a[i];
      inmin = i;
    }
  }
  int res = 0;
  fore(i, inmin, n - 1) {
    int temp = a[i];
    a[i] = a[i + 1];
    a[i + 1] = temp;
    res++;
  }
  int posmax = 0;
  fore(i, 0, n) {
    if (maxu == a[i] && i < inmax) {
      inmax = i;
    }
  }
  res += inmax;
  cout << res << endl;
}
