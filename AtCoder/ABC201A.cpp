// ABC201A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b, c;
  cin >> a >> b >> c;

  // solve
  int M = max({a, b, c}), m = min({a, b, c}), x = a+b+c-M-m;

  // output
  cout << (M-x == x-m ? "Yes" : "No") << endl;
  return 0;

}