#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> s(n);
  int g1 = 0, g2 = 0, g3 = 0, g4 = 0;

  for (int i = 0; i < n; ++i) {
    cin >> s[i];
    if (s[i] == 1)
      g1++;
    else if (s[i] == 2)
      g2++;
    else if (s[i] == 3)
      g3++;
    else
      g4++;
  }

  int res = g4;

  int pair = min(g3, g1);
  res += pair;
  g3 -= pair;
  g1 -= pair;

  // Los 3s que sobran
  res += g3;

  // Agrupar 2s
  res += g2 / 2;
  g2 %= 2;

  if (g2) {
    res++;
    g1 -= min(2, g1);
  }
  if (g1 > 0) {
    res += (g1 + 3) / 4;
  }

  cout << res << '\n';
}
