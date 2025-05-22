
#include <bits/stdc++.h>
using namespace std;
bool estprimo(long long p){
  long long raiz_p = sqrt(p);
  bool b =false;
  // while(p % i != 0 && i<= raiz_p){
  //   i++;
  // }
  // if(i == raiz_p +1){
  //   b = false; //es primo
  //   return b;
  // }
  // else{
      if(raiz_p - sqrt(p) ==0 && p>=4){
        long long raizderaiz= sqrt(raiz_p);
        long long j = 2;
        while(raiz_p % j != 0 && j <= raizderaiz){
        j++;
        }
          if(j == raizderaiz+ 1 ){
            b = true;
              }
          else {
          b = false;
        }
      if(p<4){
      return b;
    }
  }

    return b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
     long long n;
     cin >> n;
     long long a;
    for ( int i = 0; i < n; i++){
        cin >> a;
          bool b = estprimo(a);
          if(b){
          cout << "YES" << "\n";
        }
          else{
          cout << "NO" << "\n";
         }
         }
}    
