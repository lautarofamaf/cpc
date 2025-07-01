#include <bits/stdc++.h>
#define fore(i, a, b) for (int i = a; i < b; ++i)
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;

int main() {
  FIN;
  int n;
  cin >> n;
  vector<int> a(n);
  fore(i, 0, n) cin >> a[i];

  int available = 0, crimes_unresolved = 0;
  for (int event : a) {
    if (event == -1) {
      if (available == 0)
        crimes_unresolved++;
      else
        available--;
    } else {
      available += event;
    }
  }

  cout << crimes_unresolved << "\n";
}
