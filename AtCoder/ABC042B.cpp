// ABC042B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, _;
  cin >> n >> _;

  vector<string> S(n);
  for (auto &s : S) cin >> s;

  // solve
  sort(ALL(S));

  // output
  for (auto s : S) cout << s;
  cout << endl;
  return 0;

}