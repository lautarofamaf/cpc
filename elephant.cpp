#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int  n,acum,i;
    acum = 0;
    cin >> n;
    i = 1;
    while(n>0){
    if(n>=5){
      n=n-5;
    }
    else if(n==4){
      n=n-4;
    }
    else if(n==3){
      n=n-3;
    }
    else if(n==2){
      n=n-2;
    }
    else if(n==1){
      n--;
    }
    acum++;
  }    

    cout << acum << "\n";
}
