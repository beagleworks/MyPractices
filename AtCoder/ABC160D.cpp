// ABC160D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, x, y;
  cin >> n >> x >> y;
  x--, y--;

  // solve
  vector<int> X(n), Y(n);
  for (int i=0; i<n; i++) {
    if (i <= x) {
      X[i] = x - i;
      Y[i] = 1 + X[i];
    }
    else if (i >= y) {
      Y[i] = i - y;
      X[i] = 1 + Y[i];
    }
    else {
      X[i] = min(i-x, 1+y-i);
      Y[i] = min(y-i, 1+i-x);
    }
  }


  map<int, int> mp;
  for (int i=0; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      int d = min({j-i, abs(x-i)+X[j], abs(y-i)+Y[j]});
      mp[d]++;
    }
  }

  // output
  for (int i=1; i<=n-1; i++){
    cout << mp[i] << endl;
  }
  return 0;

}