#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a[5][5];
  int acum = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (a[i][j] == 1) {
        if (i < 2) {
          acum = acum + 2 - i;
        } else if (i > 2) {
          acum = acum + i - 2;
        }
        if (j < 2) {
          acum = acum + 2 - j;
        } else if (j > 2) {
          acum = acum + j - 2;
        }
      }
    }
  }
  cout << acum << "\n";
}
