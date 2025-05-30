
#include <bits/stdc++.h>
#include <climits>
#include <vector>
#define fore(i, a, b) for (int i = a, _b = (b); i < _b; ++i) // FIXED
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

// bool can(int mid, vector<int> a){
//   int res =0;
//   fore(i,0,a.size()){
//
//   }
// }
int main() {
  FIN;
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    fore(i, 0, n) { cin >> a[i]; }
    int res = 0;
    int ultimo = INT_MIN;
    fore(i, 0, n) {
      if (a[i] >= ultimo + 2) {
        res++;
        ultimo = a[i];
      }
    }

    cout << res << endl;
  }
  return 0;
}
