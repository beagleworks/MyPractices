// ABC126B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  cin >> s;

  // solve
  bool YM = false, MY = false;
  if ((s[2] == '0' && '1' <= s[3] && s[3] <= '9') || (s[2] == '1' && '0' <= s[3] && s[3] <= '2')) YM = true;
  if ((s[0] == '0' && '1' <= s[1] && s[1] <= '9') || (s[0] == '1' && '0' <= s[1] && s[1] <= '2')) MY = true;

  // output
  cout << (YM && MY ? "AMBIGUOUS" : YM ? "YYMM" : MY ? "MMYY" : "NA") << endl;
  return 0;

}