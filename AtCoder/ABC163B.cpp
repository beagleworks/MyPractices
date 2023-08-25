// ABC163B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  // solve
  int ans = n;
  for (int i=0; i<m; i++) {
    int a;
    cin >> a;
    ans -= a;
  }
  

  // output
  cout << max(ans, -1) << endl;
  return 0;

}