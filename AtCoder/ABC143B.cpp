// ABC143B

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

  vector<int> D(n);
  for (auto &d : D) cin >> d;

  // solve
  int ans = 0;
  for (int i=0; i<n; i++) {
    for (int j=i+1; j<n; j++) {
      ans += D[i] * D[j];
    }
  }
  // output
  cout << ans << endl;
  return 0;

}