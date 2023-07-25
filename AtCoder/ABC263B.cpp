// ABC263B

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
  for (int i=1; i<n; i++) {
    cin >> P[i];
    P[i]--;
  }

  // solve
  int ans = 0;
  int x = n-1;
  while (x != 0) {
    x = P[x];
    ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}