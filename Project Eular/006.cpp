#include <bits/stdc++.h>
using namespace std;

int main(){

  int ans = 0;
  for (int i=1; i<100; i++){
    for (int j=i+1; j<=100; j++){
      ans += i*j;
    }
  }

  cout << ans*2 << endl;
  return 0;
  
}