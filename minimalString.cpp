#include <bits/stdc++.h>
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
  string s;
  cin >> s;
  int n = s.size();
  string u = "";
  stack<char> t;
  vector<char> min_suf(
      n + 1); // min_suf[i] = mínimo caracter desde i hasta el final

  min_suf[n] = '{'; // mayor que 'z'
  for (int i = n - 1; i >= 0; --i) {
    min_suf[i] = min(s[i], min_suf[i + 1]);
  }

  int i = 0;
  while (i < n) {
    t.push(s[i]);
    i++;
    // Si podemos sacar de la pila para mantenerlo mínimo
    while (!t.empty() && t.top() <= min_suf[i]) {
      u += t.top();
      t.pop();
    }
  }
  cout << u << '\n';
}
