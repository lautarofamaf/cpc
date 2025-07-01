#include <bits/stdc++.h>
#include <iomanip>
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
  float res = 0;
  fore(i, 0, n) {
    float num;
    cin >> num;
    res += num;
  }
  res = res / n;
  cout << fixed << setprecision(10) << res << endl;
}
