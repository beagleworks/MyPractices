// ABC012C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  int diff = 2025 - n;

  for (int i=1; i<=9; i++) {
    if (diff % i == 0 && diff / i <= 9) {
      cout << i << " x " << diff/i << endl;
    }
  }

  return 0;

}