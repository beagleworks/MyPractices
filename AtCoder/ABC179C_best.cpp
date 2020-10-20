#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  int ans = 0;
  for (int i=1; i<=n-1; i++){
  	ans += (n - 1) / i;
  }

  cout << ans << endl;
  return 0;
  
}