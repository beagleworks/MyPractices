// ABC267C

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

  vector<int64_t> A(n), S(n);
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    A[i] = a;
    if (i == 0) S[i] = a;
    else S[i] = S[i-1] + a; 
  }

  // solve
  int64_t sum = 0;
  for (int i=0; i<m; i++) {
    sum += (i+1)*A[i];
  }
  int64_t ans = sum;
  for (int i=1; i+m<=n; i++) {
    sum += m*A[i+m-1] - S[i+m-2];
    if (i-2 >= 0) sum += S[i-2];
    ans = max(sum, ans);
  }

  // output
  cout << ans << endl;
  return 0;

}