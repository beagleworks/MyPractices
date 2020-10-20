#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
  string s;
  cin >> s;
  
  string ans = s;
  if (s.back() == 's'){
    ans += "e";
  }
  
  cout << ans << "s" << endl;
  return 0;

}