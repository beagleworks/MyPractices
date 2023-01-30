// PANASONIC2020_C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long a, b, c;
  cin >> a >> b >> c;

  // output
  cout << (a*b*4 < max((c-a-b), 0LL) * (c-a-b) ? "Yes" : "No") << endl;
  return 0;

}