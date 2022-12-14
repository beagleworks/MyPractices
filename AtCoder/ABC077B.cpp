// ABC077B
// https://atcoder.jp/contests/abc077/tasks/abc077_b

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
  int ans = sqrt(n);

  // output
  cout << ans*ans << endl;
  return 0;
  
}
