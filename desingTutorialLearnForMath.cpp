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
  int n;
  cin >> n;
  int pivot = floor(n / 2);
  while (isPrime(pivot)) {
    pivot--;
  }
  int a, b;
  a = pivot;
  b = pivot;
  if (a + b == n) {
    cout << a << " " << b << endl;
    return 0;
  }
  while (a + b != n || (isPrime(a) || isPrime(b))) {
    if (a + b < n) {
      a++;
    } else if (a + b >= n) {
      b--;
    }
  }
  cout << a << " " << b << endl;
}
