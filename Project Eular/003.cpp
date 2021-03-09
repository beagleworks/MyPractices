#include <bits/stdc++.h>
using namespace std;

int main(){

  long n = 600851475143;
  long ans = 1, cnt = 2;
  while(n != 1){
    if (n % cnt == 0){
      ans = cnt;
      n /= cnt;
    }
    else cnt++;
  }

  cout << ans << endl;
  return 0;
  
}