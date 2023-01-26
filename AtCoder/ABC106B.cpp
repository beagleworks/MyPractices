// ABC106B

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
  cout << (n >= 195 ? 5 : n >= 189 ? 4 : n >= 165 ? 3 : n >= 135 ? 2 : n >= 105 ? 1 : 0) << endl;
  return 0;

}