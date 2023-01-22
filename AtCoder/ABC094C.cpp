// ABC094C

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

  vector<int> X(n);
  for (auto &x : X) cin >> x;

  // solve
  vector Y = X;
  sort(ALL(Y));
  int lower = Y[n/2-1], upper = Y[n/2];

  // output
  for (auto x : X) {
    cout << (x <= lower ? upper : lower) << endl;    
  }

  return 0;

}