// ABC144B

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
  bool ans = false;
  for (int i=1; i<=9; i++) {
    for (int j=1; j<=9; j++) {
      if (i*j == n) ans = true;
    }
  }
  

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}