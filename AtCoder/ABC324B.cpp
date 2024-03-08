// ABC

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  long n;
  cin >> n;

  // solve
  while (n % 2 == 0) n /= 2;
  while (n % 3 == 0) n /= 3;
  bool ans = (n == 1);

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}