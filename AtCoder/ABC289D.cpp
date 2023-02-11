// ABC289D

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

  int m;
  cin >> m;

  vector B(200100, true);
  for (int i=0; i<m; i++) {
    int b;
    cin >> b;
    B[b] = false;
  }

  int x;
  cin >> x;

  // solve
  vector dp(200100, false);
  dp[0] = true;
  
  for (int i=0; i<=100000; i++) {
    if (!dp[i]) continue;
    for (auto a : A) {
      if (B[i+a]) dp[i+a] = true;
    }
  }

  // output
  cout << (dp[x] ? "Yes" : "No") << endl;
  return 0;

}