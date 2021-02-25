#include <bits/stdc++.h>
using namespace std;

int main(){

  int n, l;
  cin >> n >> l;

  if (l >= 0){
    cout << (l*2+n)*(n-1)/2 << endl;
  }
  else if (l+n-1 < 0){
    cout << (l*2+n-2)*(n-1)/2 << endl; 
  }
  else cout << (l*2+n-1)*n/2 << endl;

  return 0;
  
}
