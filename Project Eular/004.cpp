#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(int n){
  string t = to_string(n);
  reverse(t.begin(), t.end());
  return n == stoi(t);
}

int main(){

  int ans = 9009;
  for (int i=999; i>=100; i--){
    for (int j=i; j>=100; j--){
      int c = i * j;
      if (ispalindrome(c)){
        if (c >= ans) ans = c;
        else break;
      }
    }
  }
  
  cout << ans << endl;
  return 0;

}