#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  int amax;
  cin >> n >> amax;

  int acurrent = 0;
  for (int i=0; i<n; i++){
    int v, p;
    cin >> v >> p;

    acurrent += v * p;

    if (acurrent > amax * 100){
      cout << i+1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
  
}
