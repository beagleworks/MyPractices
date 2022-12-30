// ABC132C

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
  vector<int> D(n);
  for (auto &d : D) cin >> d;

  // solve
  
  sort(ALL(D));
  int ans = D[n/2] - D[n/2-1];


  // output
  cout << ans << endl;
  return 0;

}