
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int  n,acum,i;
    acum = 0;
    cin >> n;
    string str;
    cin >> str;
    i = 1;
    for (int i = 1; i < str.size(); ) {
        if (str[i] == str[i - 1]) {  
            str.erase(i, 1);
            acum++;
        } else {
            i++; 
        }
    }

    cout << acum << "\n";
}
