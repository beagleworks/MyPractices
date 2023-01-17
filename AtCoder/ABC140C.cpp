// ABC140C

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
  
  vector<int> B(n-1);
  for (auto &b : B) cin >> b;
  B.emplace_back(INF);


  // solve
  int ans = B[0];
  for (int i=1; i<n; i++) {
    ans += min(B[i-1], B[i]);
  }

  // output
  cout << ans << endl;
  return 0;

}