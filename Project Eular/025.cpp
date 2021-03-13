#include <bits/stdc++.h>
using namespace std;

int main(){

  vector<int> v(1001, 0), vx(1001, 0), vt(1001, 0);

  v[0] = 1;
  vx[0] = 1;
  int ans = 2;

  while(1){
    ans++;
    vt = v;
    for (int i=0; i<1000; i++){
      v[i] += vx[i];
      v[i+1] += v[i] / 10;
      v[i] %= 10;
    }

    if (v[999] >= 1) break;

    vx = vt;
  }

  cout << ans << endl;
  return 0;
  
}