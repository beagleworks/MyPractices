// ABC326B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  for (int i=n; i<=919; i++) {
    int a = i/100, b = (i-a*100)/10, c = i-a*100-b*10;
    if (a*b == c) {
      cout << i << endl;
      return 0;
    }
  }

}