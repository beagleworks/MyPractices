#include <bits/stdc++.h>
using namespace std;

int main(){

  vector<int> v(19);
  iota(v.begin(), v.end(), 2);
  long ans = accumulate(v.begin(), v.end(), 1L, [](int m, int n) {
    return lcm(m, n);
  });

  cout << ans << endl;
  return 0;
  
}