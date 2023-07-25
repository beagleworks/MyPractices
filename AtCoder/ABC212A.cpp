// ABC212A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b;
  cin >> a >> b;

  // solve
  if (b == 0) cout << "Gold" << endl;
  else if (a == 0) cout << "Silver" << endl;
  else cout << "Alloy" << endl;

  return 0;

}