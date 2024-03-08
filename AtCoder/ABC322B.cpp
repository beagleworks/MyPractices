// ABC322B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  string s, t;
  cin >> n >> m >> s >> t;

  // solve
  string u = t.substr(0, n), v = t.substr(m-n);

  // output
  cout << 3- (s == u)*2 - (s == v) << endl;
  return 0;

}