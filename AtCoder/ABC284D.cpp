// ABC284D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int t;
  cin >> t;

  // solve
  for (int i=0; i<t; i++) {
    long long n;
    cin >> n;
    long long r = n, memo;
    for (long long j=2; j*j<n; j++) {
      if (r % j == 0) {
        r /= j;
        memo = j;
        break;
      }
    }
    if (r%memo == 0) {
      r /= memo;
      cout << memo << " " << r << endl;
    }
    else cout << (long long)sqrt((long double)r) << " " << memo << endl;
  }

  return 0;

}