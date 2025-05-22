#include <algorithm>
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

int main() {
  FIN;
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int ceritos, unittos;
    ceritos = 0;
    unittos = 0;
    fore(i, 0, n) {
      char c;
      cin >> c;
      if (c == 'W') {
        a[i] = 0; // BLANCO
        ceritos++;
      } else {
        a[i] = 1; // NEGRO
        unittos++;
      }
    }
    if (k == n) {
      cout << ceritos << '\n';
    } else if (k == 1) {
      if (unittos >= 1) {
        cout << 0 << '\n';
      } else {
        cout << 1 << '\n';
      }
    } else {
      int i = 0;
      int left = 0;
      int right = 0;
      int unos = 0;
      int changes = 0;
      bool notdone = true;
      left = 0;
      right = k - 1; // bucamos k unos
      int minchange = INT_MAX;
      fore(i, 0, k) {
        if (a[i] == 1) {
          unos++;
        } else {
          changes++;
        }
      }
      minchange = changes;
      if (unos == k) {
        cout << 0 << '\n';
      } else {
        while (notdone && minchange != 0) {
          if (n - left == k) {
            break;
          }
          if (a[left] == 0) {
            changes--;
          } else {
            unos--;
          }
          left++;
          right++;
          if (a[right] == 0) {
            changes++;
          } else {
            unos++;
          }
          if (changes <= minchange) {
            minchange = changes;
          }
        }
        cout << minchange << '\n';
      }
    }
  }
}
