// ABC046A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b, c;
  cin >> a >> b >> c;

  // solve
  set<int> ans = {a, b, c};

  // output
  cout << ans.size() << endl;
  return 0;

}