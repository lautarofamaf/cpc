#include <bits/stdc++.h>
#define fore(i, a, b) for (int i = a, _b = (b); i < _b; ++i) // FIXED
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

bool isPrime(int num) {
  if (num <= 1) {
    return false;
  }

  if (num <= 3) {
    return true;
  }

  if (num % 2 == 0 || num % 3 == 0) {
    return false;
  }
  for (int i = 5; i * i <= num; i += 6) {
    if (num % i == 0 || num % (i + 2) == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  FIN;
  int n, m;
  cin >> n >> m;
  if (!isPrime(m)) {
    cout << "NO" << endl;
    return 0;
  }
  bool primeinterm = false;
  fore(i, n + 1, m) {
    if (isPrime(i)) {
      primeinterm = true;
    }
  }
  !primeinterm ? cout << "YES" << endl : cout << "NO" << endl;
}
