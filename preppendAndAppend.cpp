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
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int res = 0;
    bool b = true;
    int l = 0, r = n - 1;
    while (b && l < r) {
      if (s[l] != s[r]) {
        l++;
        r--;
        res++;
      } else {
        b = false;
      }
    }
    cout << n - res * 2 << endl;
  }
}
