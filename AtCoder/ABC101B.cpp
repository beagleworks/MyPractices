// ABC101B

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

  // solve
  int sn = 0, m = n;
  while (m > 0) {
    sn += m % 10;
    m /= 10;
  }

  // output
  cout << (n % sn == 0 ? "Yes" : "No") << endl;
  return 0;

}