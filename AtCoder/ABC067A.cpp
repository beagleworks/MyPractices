// ABC067A

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

  // output
  cout << (a % 3 == 0 || b % 3 == 0 || (a+b) % 3 == 0 ? "Possible" : "Impossible") << endl;
  return 0;

}