// YAHOO-PROCON2019-QUAL_A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  // solve
  int d = 1+2*(k-1);

  // output
  cout << (n >= d ? "YES" : "NO") << endl;
  return 0;

}