// ABC144A

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
  int ans = a * b;

  // output
  cout << (a <= 9 && b <= 9 ? ans : -1) << endl;
  return 0;

}