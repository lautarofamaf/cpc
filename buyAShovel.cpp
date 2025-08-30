#include <bits/stdc++.h>
#include <climits>
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
  int k, r;
  cin >> k >> r;
  int i = 1;
  while (i <= INT_MAX) {
    int burles = i * k;
    if (burles % 10 == r || burles % 10 == 0) {
      break;
    }
    i++;
  }
  cout << i << endl;
}
