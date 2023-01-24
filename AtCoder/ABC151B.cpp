// ABC151B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k, m;
  cin >> n >> k >> m;

  // solve
  int sum = 0;
  for (int i=0; i<n-1; i++) {
    int a;
    cin >> a;
    sum += a;
  }
  
  int ans = max(0, m*n - sum);

  // output
  cout << (ans <= k ? ans : -1) << endl;
  return 0;

}