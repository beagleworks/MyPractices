// ABC274C

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
  vector<int> A(n);
  for (auto &a: A) cin >> a;

  // solve
  vector<int> ans(2*n+2);
  ans[1] = 0;

  for (int i=1; i<=n; i++) {
    ans[2*i] = ans[2*i+1] = ans[A[i-1]]+1; 
  }

  // output
  for (int i=1; i<=2*n+1; i++) cout << ans[i] << endl;
  return 0;

}