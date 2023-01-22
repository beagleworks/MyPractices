// ABC050A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b;
  char op;
  cin >> a >> op >> b;

  // solve
  int ans = (op == '+' ? a+b : a-b);

  // output
  cout << ans << endl;
  return 0;

}