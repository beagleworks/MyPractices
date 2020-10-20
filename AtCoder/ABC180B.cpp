#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  long long ans1 = 0LL;
  long double ans2 = 0.0L;
  int ans3 = 0;
  for (int i=0; i<n; i++){
    int x;
    cin >> x;
    x = abs(x);

    ans1 += x;
    ans2 += (long long)x * x;
    ans3 = max(ans3, x);

  }

  cout << ans1 << endl;
  cout << fixed << setprecision(15) << sqrt(ans2) << endl;
  cout << ans3 << endl;
  return 0;
  
}