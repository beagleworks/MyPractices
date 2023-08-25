// ABC314B

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

  vector Lots(37, vector<int>());
  vector<int> Bets(n);
  for (int i=0; i<n; i++) {
    cin >> Bets[i];
    for (int j=0; j<Bets[i]; j++) {
      int l;
      cin >> l;
      Lots[l].emplace_back(i);
    }
  }

  int x;
  cin >> x;

  // solve
  auto p = Lots[x];
  int mn = INF;

  set<int> ans;
  for (auto pp : p) {
    if (Bets[pp] == mn) {
      ans.emplace(pp);
    }
    else if (Bets[pp] < mn) {
      mn = Bets[pp];
      ans.clear();
      ans.emplace(pp);
    }
  }

  // output
  cout << ans.size() << endl;
  if (!ans.empty()) for (auto x : ans) cout << x+1 << '\n';
  return 0;

}