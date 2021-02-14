#include <bits/stdc++.h>
using namespace std;

int main(){

  int n, x;
  cin >> n >> x;

  for (int i=0; i<n; i++){
    int a;
    cin >> a;
    if (a != x) cout << a << endl;
  }

  return 0;
  
}