#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  int ans = 0;

  if (n >= 105){
    for (int i=105; i<=n; i+=2){
      int cnt = 0;
      for (int j=1; j<=i; j+=2){
        if (i % j == 0){
          cnt++;
        }
      }

      if (cnt == 8) ans++;
    }
  }  
  
  cout << ans << endl;
  return 0;
  
}