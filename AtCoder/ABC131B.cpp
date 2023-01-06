// ABC131B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, l;
  cin >> n >> l;

  // solve
  int e = INF;
  int ans = 0;
  for (int i=0; i<n; i++) {
    ans += l+i;
    if (abs(l+i) < abs(e)) e = l+i; 
  }

  // output
  cout << ans-e << endl;
  return 0;

}