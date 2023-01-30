// AGC011B

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

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  sort(ALL(A));
  vector<long long> sum(n);
  for (int i=0; i<n; i++) {
    if (i == 0) sum[i] = A[i];
    else sum[i] = sum[i-1] + A[i];
  }

  int lim = -1;
  for (int i=n-2; i>=0; i--) {
    if (sum[i] * 2 < A[i+1]) {
      lim = i;
      break;
    } 
  }

  // output
  cout << n - (lim + 1) << endl;
  return 0;

}