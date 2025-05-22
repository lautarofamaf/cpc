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
  FIN ll t, q, c, n, k;
  string s;
  cin >> t; // t casos
  while (t--) {
    vector<pair<ll, ll>> a; // Vector de lr
    vector<pair<ll, ll>> b; // Vector<(inicio,largo)>
                            
    cin >> n >> c >> q;
    cin >> s;
    
    // <(1,4), (5,7), (3,8)>, lr 
    fore(i, 0, c) { cin >> a[i].first >> a[i].second; }

    while (q--) {
      cin >> k;
      
    }

  return 0;
}

< (start,length) > // Para cada segmento
si indexo 10 esta aca

mark;markmar
{0,4}                               mark
{0,4+(r-l+1)=8}                     mark-mark
{0=(b[i-1].second -1),8+(r-l+1)=11} mark-MARk-mar
{2,13}                              mark-mark-mar-Rk 
{0,17}                              mark-mark-mar-rk-MARK

primero q sea mayor le resto 1(index);

con upperbound(begin.second,end.second,1);

s[k]caso particular k menor a n

else{}

con upperbound(begin.second,end.second,1);

k= (k - a[i-1].second + a[i].first -1 )
ret s[k]
0,1,2,3