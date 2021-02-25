#include <bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;

  long long ans = 0;

  int n = (int)s.size() - 1;

  for (int bit = 0; bit < (1 << n); bit++){
    long long t = s[0] - '0';
    for (int i=0; i<n; i++){
      
      if (bit & (1 << i)){
        ans += t;
        t = s[i+1] - '0';
      }
      else {
        t = t * 10 + s[i+1] - '0';
      }
    }

    ans += t;
  }

  cout << ans << endl;
  return 0;

}