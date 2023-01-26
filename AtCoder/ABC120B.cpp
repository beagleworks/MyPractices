// ABC120B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b, k;
  cin >> a >> b >> k;

  // solve
  int cnt = 0;
  for (int i=min(a,b); i>0; i--) {
    if (a % i == 0 && b % i == 0) cnt++;
    if (cnt == k) {
      cout << i << endl;
      return 0;
    }
  }

}