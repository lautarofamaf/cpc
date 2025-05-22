
#include <algorithm>
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
  int res = 0;
  string str;
  cin >> str;
  vector<ll> a(str.size(), 0);
  fore(i, 0, str.size()) {
    if (str[i] == '1') {
      a[i] = 1;
    }
    if (str[i] == '2') {
      a[i] = 2;
    }
    if (str[i] == '3') {
      a[i] = 3;
    }
  }
  sort(a.begin(), a.end());
  int i = 1;
  i = upper_bound(a.begin(), a.end(), 0) - a.begin();
  cout << a[i];
  i++;
  while (i < str.size()) {
    cout << '+';
    cout << a[i];
    i++;
  }

  cout << '\n';
}
