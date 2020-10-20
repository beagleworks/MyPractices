#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  int ans = 0;
  for (int i=1; i<n; i++){
  	int ab = n - i;
    for (int j=1; j*j<=ab; j++){
      if (ab % j == 0){
        ans += 2;
        if (j*j == ab){
          ans--;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
  
}