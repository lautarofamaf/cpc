#include <bits/stdc++.h>
#define fore(i, a, b) for (int i = a, _b = (b); i < _b; ++i) // FIXED
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

vector<int> lucky;

void generate_lucky(int num = 0) {
  if (num > 1000)
    return;
  if (num != 0)
    lucky.push_back(num);
  generate_lucky(num * 10 + 4);
  generate_lucky(num * 10 + 7);
}

int main() {
  FIN;
  int n;
  cin >> n;
  generate_lucky();
  for (int x : lucky) {
    if (n % x == 0) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
}
