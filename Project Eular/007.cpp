#include <bits/stdc++.h>
using namespace std;

int main(){

  int cnt = 0;
  for (int i=2; 1; i++){

    bool f = true;
    for (int j=2; j*j<=i; j++){
      if (i % j == 0){
        f = false;
        break;
      }
    }
    if (f) cnt++;
    if (cnt == 10001){
      cout << i << endl;
      return 0;
    }
  }
}