// ABC028D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long n, k;
  cin >> n >> k;

  // solve
  long long total = n*n*n;
  long long midk = n*3-2 + (k-1)*(n-k)*6;
  long double ans = (long double)midk / total;

  // output
  printf("%.10Lf\n", ans);
  return 0;

}