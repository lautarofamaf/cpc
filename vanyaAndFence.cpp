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
  int n, h;
  cin >> n >> h;
  int res = 0;
  fore(i, 0, n) {
    int a;
    cin >> a;
    if (a > h)
      res += 2;
    else
      res++;
  }
  cout << res << endl;
}
