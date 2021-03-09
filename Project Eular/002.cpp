#include <bits/stdc++.h>
using namespace std;

vector<long long> v(150, -1);

long long fibo(int n){
  if (n == 0) return 1;
  else if (n == 1) return 2;
  
  if (v[n] != -1) return v[n];
  else return v[n] = fibo(n-1) + fibo(n-2);
}


int main(){

  long long ans = 0;
  for (int i=0; 1; i++){
    
    long long t = fibo(i);

    if (t >= 4000000) break;
    else if (t % 2 == 0) ans += t;
  }

  cout << ans << endl;
  return 0;
  
}