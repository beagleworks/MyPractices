#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  
  int cnt = 0;
  for (int i=0; i<n; i++){

    int a, b;
    cin >> a >> b;    
    (a == b) ? cnt++ : cnt = 0;
    
    if (cnt >= 3){
      cout << "Yes" << endl;
      return 0;
    }
  }
  
  cout << "No" << endl;
  return 0;
  
}