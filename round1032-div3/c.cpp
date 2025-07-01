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
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    vector<pair<int, int>> maxis;
    fore(i, 0, n) {
      int max = -1;
      int inmax = -1;
      fore(j, 0, m) {
        cin >> a[i][j];
        if (a[i][j] >= max) {
          max = a[i][j];
          inmax = j;
        }
      }
      maxis.push_back({max, inmax});
    }
    sort(ALL(maxis));
    int i = maxis.size();
    int res = i;
    bool b = true;
    while (maxis[i - 2].first == maxis[i - 1].first) {
      if (maxis[i - 2].second != maxis[i - 1].second) {
        b = false;
      }
      i--;
    }
    if (b)
      res--;

    cout << res << endl;
  }
}
