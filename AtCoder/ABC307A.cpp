// ABC307A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  int ans = 0;
  for (int i=0; i<n*7; i++) {
    int a;
    cin >> a;
    ans += a;
    if (i%7 == 6) {
      cout << ans << '\n';
      ans = 0;
    }
  }
  
  return 0;

}