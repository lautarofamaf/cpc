#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string players;
  cin >> players;
  int i = 1;
  int j = 0;
  if (players.size() >= 7) {
    while (i < 7 && j < players.size() - 1) {
      if (players[j] == players[j + 1]) {
        i++;
      } else {
        i = 1;
      }
      j++;
    }
  } else {
    cout << "NO" << "\n";
    return 0;
  }
  if (i >= 7) {
    cout << "YES" << "\n";
  } else {
    cout << "NO" << "\n";
  }
}
