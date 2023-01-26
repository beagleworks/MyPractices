// ABC145B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  string t1 = s.substr(0, n/2), t2 = s.substr(n/2);

  // output
  cout << (t1 == t2 ? "Yes" : "No") << endl;
  return 0;

}