// CODE-FESTIVAL-2017_qual_A_B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m, k;
  cin >> n >> m >> k;

  // solve
  bool ans = false;
  for (int i=0; i<=n; i++) {
    for (int j=0; j<=m; j++) {
      int cnt = i*(m-j) + j*(n-i);
      if (cnt == k) ans = true; 
    }
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}