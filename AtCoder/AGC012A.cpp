// AGC012A

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

  vector<long long> A(3*n);
  for (auto &a : A) cin >> a;

  // solve
  sort(ALL(A));
  long long ans = 0;
  for (int i=0; i<n; i++) {
    ans += A[3*n-2-2*i];
  } 


  // output
  cout << ans << endl;
  return 0;

}