// ABC097A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  // output
  cout << (abs(c-a) <= d || (abs(b-a) <= d && abs(c-b) <= d) ? "Yes" : "No") << endl;
  return 0;

}