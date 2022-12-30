// ABC132B

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
  vector<int> P(n);
  for (auto &p : P) cin >> p;

  // solve
  int ans = 0;
  for (int i=1; i<n-1; i++) {
    if (min(P[i-1], P[i+1]) < P[i] && P[i] < max(P[i-1], P[i+1])) ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}