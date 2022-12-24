// ABC074A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, a;
  cin >> n >> a;

  // solve
  int ans = n*n-a;

  // output
  cout << ans << endl;
  return 0;

}