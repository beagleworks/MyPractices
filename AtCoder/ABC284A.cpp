// ABC284A

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
  vector<string> s(n);
  for (auto &ss : s) cin >> ss;

  // solve
  reverse(ALL(s));

  // output
  for (auto ss : s) cout << ss << endl;
  return 0;

}