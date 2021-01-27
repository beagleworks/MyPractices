#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  vector<int> v(n);
  for(int i=0; i<n; i++){
    cin >> v[i];
  }

  int ans = 0;
  for (int i=0; i<n; i++){
    int cmin = 100001;
    for (int x=i; x<n; x++){
      cmin = min(cmin, v[x]);
      ans = max(ans, cmin*(x-i+1));
    }
  }

  cout << ans << endl;
  return 0;
  
}
