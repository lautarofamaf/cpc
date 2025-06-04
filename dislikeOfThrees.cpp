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
  vector<int> polycarp;

  fore(i, 1, 5000) {
    string is;
    is = to_string(i);

    if (i % 3 != 0 && is[is.size() - 1] != '3') {
      polycarp.push_back(i);
    }
  }
  while (t--) {
    int k;
    cin >> k;
    cout << polycarp[k - 1] << endl;
  }
}
