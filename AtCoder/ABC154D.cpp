// ABC154D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  cin >> n >> k;
  vector<long long> A(n);
  for (auto &a : A) cin >> a;

  // solve
  double ans = .0;
  long long sum = 0;
  for (int i=0; i<k; i++) sum += A[i];
  long long msum = sum;
  for (int i=1; i+k<=n; i++) {
    sum += A[i+k-1] - A[i-1];
    msum = max(sum, msum);
  }

  // output
  ans = (msum+k) / 2.0;
  printf("%.10f\n", ans);
  return 0;

}