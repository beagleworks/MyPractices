#include <bits/stdc++.h>
using namespace std;

int main(){

  long s;
  cin >> s;
  int ans = 1000;
  while (s > 100){
    int x = s % 1000;
    ans = min(abs(x-753), ans);
    s /= 10;
  }

  cout << ans << endl;
  return 0;
  
}