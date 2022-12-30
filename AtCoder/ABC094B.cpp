// ABC094B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m, x;
  cin >> n >> m >> x;
  vector<bool> A(m);
  for (int i=0; i<m; i++) {
    int a;
    cin >> a;
    A[a] = true;
  }

  // solve
  int cnt = 0;
  for (int i=1; i<x; i++) {
    if (A[i]) cnt++;
  }

  int ans = min(cnt, m-cnt);
  
  // output
  cout << ans << endl;
  return 0;

}