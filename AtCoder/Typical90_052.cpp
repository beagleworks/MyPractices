// Typical90_052

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int MOD = 1000000007;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  int64_t ans = 1;
  for (int i=0; i<n; i++) {
    int sum = 0;
    for (int j=0; j<6; j++) {
      int a;
      cin >> a;
      sum += a;
    }
    ans *= sum;
    ans %= MOD;
  }

  // output
  cout << ans << endl;
  return 0;

}