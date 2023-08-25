// ABC309A

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
  bool ans = (b - a == 1 && (a % 3 == 2 || b % 3 == 2));

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}