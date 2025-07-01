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
  // string s;
  // cin >> s;
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int i = 6;
    int sumfs = 0;
    int sumscd = 0;
    while (i) {
      if (i > 3) {
        sumfs += n % 10;
        n = n / 10;
      } else {
        sumscd += n % 10;
        n = n / 10;
      }
      i--;
    }
    (sumfs == sumscd) ? cout << "YES" << '\n' : cout << "NO" << '\n';
  }
}
