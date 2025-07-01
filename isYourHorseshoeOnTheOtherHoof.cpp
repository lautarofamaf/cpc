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
  int s1, s2, s3, s4;
  set<int> a;
  fore(i, 0, 4) {
    int s;
    cin >> s;
    a.insert(s);
  }
  cout << 4 - a.size() << endl;
}
