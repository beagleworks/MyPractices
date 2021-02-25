#include <bits/stdc++.h>
using namespace std;

int main(){

  int k, s;
  cin >> k >> s;

  int ans = 0;
  for (int i=0; i<=k; i++){
    for (int j=0; j<=k; j++){
      int z = s-i-j;
      if (z >= 0 && z <= k) ans++;
    }
  }

  cout << ans << endl;
  return 0;
  
}