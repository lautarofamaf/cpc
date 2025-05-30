#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
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
  vector<int> beatifulyears;
  set<int> a;
  fore(i, 1000, 10000) {
    int icopy = i;
    fore(j, 0, 4) {
      a.insert(icopy % 10);
      icopy = icopy / 10;
    }

    if (a.size() == 4) {
      beatifulyears.push_back(i);
    }
    a.clear();
  }
  int res = upper_bound(ALL(beatifulyears), n) - beatifulyears.begin();
  cout << beatifulyears[res] << endl;
}
