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
  map<string, int> a;
  while (n--) {
    string s;
    cin >> s;
    a[s]++;
  }
  int maxcount = 0;
  string stringmax;
  for (auto &pair : a) {
    if (pair.second >= maxcount) {
      maxcount = pair.second;
      stringmax = pair.first;
    }
  }
  cout << stringmax << endl;
}
