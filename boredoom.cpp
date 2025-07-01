
#include <bits/stdc++.h>
#include <climits>
#include <vector>
#define fore(i, a, b) for (int i = a, _b = (b); i < _b; ++i) // FIXED
#define ALL(x) x.begin(), x.end()
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

void buildTable(vector<ll> &tabla, vector<ll> &arreglo, ll maximu) {
  // fore(i,maximu,maximu+2){
  //   arreglo[i]=0;
  // }
  for (int i = maximu; i >= 0; i--) {
    tabla[i] = max(i * arreglo[i] + tabla[i + 2], tabla[i + 1]);
  }
}

int dp(vector<int> &arreglo, int k, int maximu) {
  if (k > maximu)
    return 0;
  return max(dp(arreglo, k + 2, maximu) + k * arreglo[k],
             dp(arreglo, k + 1, maximu));
}

int main() {
  FIN;
  ll n;
  cin >> n;
  // vector<int> seq(n);
  // vector<int> index(n, 1);
  // fore(i, 0, n) { cin >> seq[i]; }
  ll maximu = -1;
  ll minimu = LLONG_MAX;
  vector<ll> arreglo(1e5 + 10, 0);
  fore(i, 0, n) {
    int valor;
    cin >> valor;
    if (valor > maximu)
      maximu = valor; // gudo el maximo elemento
    if (valor < minimu)
      minimu = valor; // gudo el minimo elemento
    arreglo[valor]++;
  }
  vector<ll> tabla(maximu + 3, 0);
  buildTable(tabla, arreglo, maximu);
  cout << tabla[0] << endl;
}
