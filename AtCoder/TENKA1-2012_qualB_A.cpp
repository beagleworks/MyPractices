// TENKA1-2012_qualB_A

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
  for (int i=1; i<=127; i++) {
    if (i%3 == a && i%5 == b && i%7 == c) cout << i << endl;
  }

  return 0;

}