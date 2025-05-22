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

bool cmp(int n, pair<int, int> const &p) {
  // For instance...
  return ((p.first < n));
}

int main() {
  FIN;
  int n;
  cin >> n;
  vector<int> ones, twos, threes;

  fore(i, 0, n) {
    int x;
    cin >> x;
    if (x == 1)
      ones.push_back(i + 1); // usamos i+1 para index 1-based
    else if (x == 2)
      twos.push_back(i + 1);
    else if (x == 3)
      threes.push_back(i + 1);
  }

  int teams = min({(int)ones.size(), (int)twos.size(), (int)threes.size()});
  cout << teams << '\n';
  fore(i, 0, teams) {
    cout << ones[i] << " " << twos[i] << " " << threes[i] << '\n';
  }
}
