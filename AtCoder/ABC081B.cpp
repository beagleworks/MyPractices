#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  long long s = 0;
  int ans = 100;

  for (int i=0; i<n; i++){
    int a;
    cin >> a;

    int cnt = 0;
    while(a % 2 == 0){
      a /= 2;
      cnt++;
    }

    ans = min(cnt, ans);
  }

  cout << ans << endl;
  return 0;
  
}