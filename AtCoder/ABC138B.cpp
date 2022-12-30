// ABC138B

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
  double sum = .0;
  for (int i=0; i<n; i++) {
    double a;
    cin >> a;
    a = pow(a, -1);
    sum += a;
  }

  // output
  printf("%.10f\n", pow(sum,-1));
  return 0;

}