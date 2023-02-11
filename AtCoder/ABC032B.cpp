// ABC032B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  int k;
  cin >> s >> k;

  // solve
  int n = s.size();
  set<string> ans;
  for (int i=0; i+k-1<n; i++) {
    ans.emplace(s.substr(i, k));
  }

  // output
  cout << ans.size() << endl;
  return 0;

}