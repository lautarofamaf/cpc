#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int limakW, bobW;
  cin >> limakW;
  cin >> bobW;
  int acum = 0;
  while (limakW <= bobW) {
    limakW = limakW * 3;
    bobW = bobW * 2;
    acum++;
  }
  cout << acum << "\n";
}
