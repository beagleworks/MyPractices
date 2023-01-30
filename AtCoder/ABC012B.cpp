// ABC012B

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
  int h = n / 3600, m = (n % 3600) / 60, s = n % 3600 % 60;

  // output
  printf("%02d:%02d:%02d\n", h, m, s);
  return 0;

}