// AGC032A

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

  vector<int> B(n);
  for (auto &b : B) cin >> b;

  // solve
  vector<int> ans;

  while(!B.empty()) {
    int target = -1;
    for (int i=0; i<(int)B.size(); i++) {
      if (B[i] == i+1) target = i;
    }
    if (target == -1) break;
    ans.emplace_back(B[target]);
    B.erase(B.begin() + target);
  }
  
  // output
  if ((int)ans.size() < n) cout << -1 << endl;
  else for (int i=n-1; i>=0; i--) cout << ans[i] << endl;
  return 0;

}