// ABC161C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  long long n, k;
  cin >> n >> k;

  // solve
  n %= k;
  while (true) {
    long long t = abs(n-k);
    if (n <= t) break;
    n = t;
  }

  // output
  cout << n << endl;
  return 0;

}