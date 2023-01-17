// ABC059B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string a, b;
  cin >> a >> b;

  // solve
  string ans;
  if (a.size() > b.size()) ans = "GREATER";
  else if (a.size() < b.size()) ans = "LESS";
  else if (a > b) ans = "GREATER";
  else if (a < b) ans = "LESS";
  else ans = "EQUAL";

  cout << ans << endl;

  return 0;

}