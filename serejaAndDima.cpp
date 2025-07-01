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
  int n;
  cin >> n;
  vector<int> a(n);
  fore(i, 0, n) { cin >> a[i]; }
  int sereja = 0;
  int dima = 0;
  int i = 0;
  int j = n - 1;
  bool b = true;
  while (i <= j) {
    if (b) {
      if (a[i] >= a[j]) {
        sereja += a[i];
        i++;
      } else {
        sereja += a[j];
        j--;
      }
      b = false;
    } else {
      if (a[i] >= a[j]) {
        dima += a[i];
        i++;
      } else {
        dima += a[j];
        j--;
      }
      b = true;
    }
  }
  cout << sereja << " " << dima << endl;
}
