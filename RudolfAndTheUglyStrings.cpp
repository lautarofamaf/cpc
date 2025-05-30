#include <bits/stdc++.h>
#define fore(i, a, b) for (int i = (a), _b = (b); i < _b; ++i) // FIXED
#define ALL(x) x.begin(), x.end()
#define v(x) vector<x>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define viii vector<pair<int, pair<int, int>>>
#define ii pair<int><int>
#define FIN                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace std;
typedef long long ll;

void build(int *dp, string s, int n) {

  dp[n] = 0;

  for (int i = n - 1; i >= 0; i--) {
    if (i + 2 < n && ((s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') ||
                      (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e'))) {
      dp[i] = min(1 + dp[i + 1], min(1 + dp[i + 2], 1 + dp[i + 3]));
    }

    else
      dp[i] = min(1 + dp[i + 1], dp[i + 1]);
  }
}

int main() {
  FIN;

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int dp[n];

    build(dp, s, n);

    cout << dp[0] << endl;
  }

  return 0;
}
