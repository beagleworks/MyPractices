// ABC260A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  char a, b, c;
  cin >> a >> b >> c;

  // output
  if (a == b && b == c) cout << -1 << endl;
  else cout << (a == b ? c : b == c ? a : b) << endl;
  return 0;

}