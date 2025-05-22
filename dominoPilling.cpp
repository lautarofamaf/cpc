#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> m;
  cin >> n;
  int a[m][n];
  int acum = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      a[i][j] = 0;
    }
  }

  // for (int i = 0; i < m; i = i + 2) {
  //   for (int j = 0; j < n; j++) {
  //     if (a[i][j] == 0 && a[i + 1][j] == 0) {
  //       a[i][j] = 1;
  //       a[i + 1][j] = 1;
  //       acum++;
  //     } else if (a[i][j] == 0 && a[i][j + 1] == 0) {
  //       a[i][j] = 1;
  //       a[i][j + 1] = 1;
  //       acum++;
  //     }
  //   }
  // }
  int maux = m / 2;
  int i = 0;
  while (maux > 0) {
    for (int j = 0; j < n; j++) {
      a[i][j] = 1;
      a[i + 1][j] = 1;
      acum++;
    }
    i++;
    maux--;
  }
  if (m % 2 != 0) {
    for (int j = 0; j < n - 1; j = j + 2) {
      a[m - 1][j] = 1;
      a[m - 1][j + 1] = 1;
      acum++;
    }
  }
  cout << acum << "\n";
}
//   // Llenar parejas de filas
//   for (int i = 0; i + 1 < m; i += 2) {  // Avanza de a 2 en 2
//     for (int j = 0; j < n; j++) {
//       a[i][j] = 1;
//       a[i + 1][j] = 1;
//       acum++;
//     }
//   }

//   // Si m es impar, manejar la última fila
//   if (m % 2 != 0) {
//     for (int j = 0; j + 1 < n; j += 2) {  // Avanza de a 2 en 2
//       a[m - 1][j] = 1;
//       a[m - 1][j + 1] = 1;
//       acum++;
//     }
//   }

//   cout << acum << "\n";
// }
