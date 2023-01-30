// ABC067C(ARC078A)

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

  vector<long long> A(n);
  long long sum = 0;
  for (int i=0; i<n; i++) {
    long long a;
    cin >> a;
    A[i] = a;
    sum += a;
  }

  // solve
  long long ans = LINF;
  long long tsum = 0;
  for (int i=0; i<n-1; i++) {
    tsum += A[i];
    ans = min(ans, abs(sum-2*tsum));
  }

  // output
  cout << ans << endl;
  return 0;

}