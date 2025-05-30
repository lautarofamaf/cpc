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
  bool b = false;
  while (n--) {
    int a;
    cin >> a;
    if (a == 1)
      b = true;
  }
  (b) ? cout << "HARD" << endl : cout << "EASY" << endl;
}
