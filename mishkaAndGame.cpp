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
  vector<pair<int, int>> a(n);
  int m = 0, c = 0;
  fore(i, 0, n) {
    cin >> a[i].first >> a[i].second;
    if (a[i].first > a[i].second) {
      m++;
    } else if (a[i].first < a[i].second)
      c++;
  }
  if (m > c) {
    cout << "Mishka" << endl;
  } else if (m < c) {
    cout << "Chris" << endl;
  } else {
    cout << "Friendship is magic!^^" << endl;
  }
}
