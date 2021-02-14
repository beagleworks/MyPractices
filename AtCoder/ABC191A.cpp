#include <bits/stdc++.h>
using namespace std;

int main(){

  int v, t, s, d;
  cin >> v >> t >> s >> d;

  if (d < v*t || v*s < d) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
  
}