// NIKKEI2019-2-QUAL_A

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

  // output
  cout << (n % 2 == 0 ? n/2-1 : n/2) << endl;
  return 0;

}