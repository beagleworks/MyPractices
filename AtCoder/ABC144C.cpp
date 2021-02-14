#include <bits/stdc++.h>
using namespace std;

int main(){

  long long n;
  cin >> n;

  long long t;
  for (int i=1; (long long)i*i<=n; i++){
    if (n%i == 0) t = i;
  }

  long long ans = t + n/t;
  cout << ans-2 << endl;
  return 0;
  
}