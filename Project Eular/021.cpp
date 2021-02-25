#include <bits/stdc++.h>
using namespace std;

vector<int> v(10000, -1);

void culc_d(int n){
  int t = 0;
  for (int i=1; i<n; i++){
    if (n%i == 0) t += i;
  }

  v[n] = t;
  return;
}

int main(){

  int ans = 0;
  v[0] = 1;
  v[1] = 1;
  
  for (int i=2; i<10000; i++){
    if (v[i] == -1) culc_d(i);
    
    if (i <= v[i]) continue;
    else if (i == v[v[i]]) ans += i + v[i];
  }

  cout << ans << endl;
  return 0;
  
}
