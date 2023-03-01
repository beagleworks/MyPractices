// ABC266C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  vector<int> X(4), Y(4);
  for (int i=0; i<4; i++) {
    cin >> X[i] >> Y[i];
  }

  // solve

  bool ans = true;
  for (int i=0; i<4; i++) {
    int p = X[(i+3)%4] - X[i], q = Y[(i+3)%4] - Y[i];
    int r = X[(i+1)%4] - X[i], s = Y[(i+1)%4] - Y[i];
    if (p*s - q*r > 0) ans = false;
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}