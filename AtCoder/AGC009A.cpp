// AGC009A

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
  
  vector<long long> A(n), B(n);
  for (int i=0; i<n; i++) {
    cin >> A[i] >> B[i];
  }

  // solve
  long long cnt = 0;
  for (int i=n-1; i>=0; i--) {
    long long cur = A[i] + cnt;
    if (cur % B[i] != 0) cnt += B[i] - cur % B[i]; 
  }

  // output
  cout << cnt << endl;
  return 0;

}