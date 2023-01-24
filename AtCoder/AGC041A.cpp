// AGC041A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long n, a, b;
  cin >> n >> a >> b;
  a--, b--;

  // solve
  long long ans = 0;
  if ((b-a)%2 == 1) {
    if (a+1 <= n-b) {
      b -= a+1;
      ans += a+1;
      a = 0;
    }
    else {
      a += n-b;
      ans += n-b;
      b = n-1;
    }
  }
  
  ans += (b - a) / 2;    

  // output
  cout << ans << endl;
  return 0;

}