#include <bits/stdc++.h>
using namespace std;

long ans = 1L;

void func(int x){
 
  int i = 2;
  long t = ans;
  while(x != 1){
    if (x % i == 0 && t % i == 0){
      x /= i;
      t /= i;
    }
    else if (x % i == 0){
      x /= i;
      ans *= i;
    }
    else i++;
  }

  return;
}


int main(){

  for (int i=2; i<=20; i++){
    if (ans % i != 0) func(i);
  }

  cout << ans << endl;
  return 0;
  
}