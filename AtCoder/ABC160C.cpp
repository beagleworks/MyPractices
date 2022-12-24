// ABC160C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int k, n;
  cin >> k >> n;
  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  int mxlen = A[0]+k-A[n-1];
  for (int i=1; i<n; i++) mxlen = max(A[i]-A[i-1], mxlen);

  // output
  cout << k-mxlen << endl;
  return 0;

}