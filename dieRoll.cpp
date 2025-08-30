
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
  int y, w;
  cin >> y >> w;
  int num = max(y, w) - 1;

  int gcdd = std::gcd(num, 6);
  num = 6 - num;
  num /= gcdd;
  int dem = 6 / gcdd;
  cout << num << "/" << dem << endl;
}
