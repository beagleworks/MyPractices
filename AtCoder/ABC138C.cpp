// ABC138C

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
  vector<int> V(n);
  for (auto &v : V) cin >> v;

  // solve
  sort(ALL(V));
  double ans = (double)V[0];  
  
  for (int i=1; i<n; i++) {
    ans += V[i];
    ans /= 2.0;
  }

  // output
  printf("%.10f\n", ans);
  return 0;

}