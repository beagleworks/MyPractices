// ABC139D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  long long ans = 0LL;
  for (int i=1; i<=n-1; i++) ans += i;

  // output
  cout << ans << endl;
  return 0;

}

// n(n-1)/2 を計算したほうがよかった