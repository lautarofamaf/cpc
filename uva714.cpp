#include <bits/stdc++.h>
#include <numeric>
#define fore(i, a, b) for (int i = a, _b = (b); i < _b; ++i) // FIXED
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

bool can(int mid, vector<int> &p, int k) {
  int res = 0;
  int acum = 0;
  int escriba = 0;
  int i = 0;
  vector<int> index(k - 1);
  while (escriba < k) {
    while (i < p.size() && acum + p[i] > mid) {
      acum += p[i];
      i++;
    }
    index.push_back(i + 1);
    escriba++;
  }
  if (escriba == k) {
    vector<int> *pp = new vector<int>(k);
    fore(i, 0, k - 1) { pp->push_back(index[i]); }
    pp->push_back(1);
    return pp;
  }
  return false;
}

int main() {
  FIN int n;
  cin >> n;
  while (n--) {
    int m, k;
    cin >> m >> k;
    vector<int> p(m);
    fore(i, 0, m) { cin >> p[i]; }
    sort(ALL(p));
    int lo = p[m - 1], hi = accumulate(ALL(p), 0);
    while (lo + 1 < hi) {
      int mid = lo + (hi - lo) / 2;
      if (can(mid, p, k))
        hi = mid;
      else
        lo = mid;
    }
  }
  return 0;
}
