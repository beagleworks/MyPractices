// ABC071A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int x, a, b;
  cin >> x >> a >> b;

  // output
  cout << (abs(x-a)<abs(x-b) ? "A" : "B") << endl;
  return 0;

}