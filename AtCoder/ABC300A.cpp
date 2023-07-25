// ABC300A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, a, b;
  cin >> n >> a >> b;

  // solve
  for (int i=0; i<n; i++) {
    int c;
    cin >> c;
    if (c == a+b) {
      cout << i+1 << endl;
      return 0;
    }
  }

}