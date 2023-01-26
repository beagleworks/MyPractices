// DDCC2020-QUAL_B

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

  vector<long long> S(n);
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    if (i > 0) S[i] = S[i-1] + a;
    else S[i] = a;
  }

  // solve
  long long ans = LINF;
  for (int i=0; i<n; i++) {
    ans = min(abs(S[n-1] - 2*S[i]), ans); 
  }

  // output
  cout << ans << endl;
  return 0;

}