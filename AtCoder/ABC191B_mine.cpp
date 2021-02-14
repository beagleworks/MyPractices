#include <bits/stdc++.h>
using namespace std;

int main(){

  int n, x;
  cin >> n >> x;

  bool f = true;
  for (int i=0; i<n; i++){
    int a;
    cin >> a;
    if (a != x){
      if (f) f = false;
      else cout << " ";
      cout << a;
    }
  }

  cout << endl;
  return 0;
  
}