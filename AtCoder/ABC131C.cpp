#include <bits/stdc++.h>
using namespace std;

int main(){

  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  long long ans = b - (b/c + b/d - b/lcm(c, d)) - (a-1 - ((a-1)/c + (a-1)/d - (a-1)/lcm(c, d)));
  cout << ans << endl;
  return 0;
  
}