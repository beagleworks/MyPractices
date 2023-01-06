// ABC130D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long n, k;
  cin >> n >> k;
  vector<long long> A(n);
  for (int i=0; i<n; i++) {
    cin >> A[i];
  }

  // solve
  long long ans = 0, sum = 0;
  long long left = 0, right = 0;
  while (left != n-1 || right != n) {
    if (sum < k && right != n) {
      sum += A[right];
      right++;
    }
    else {
      sum -= A[left];
      left++;
    }

    if (sum >= k) ans += n-(right-1);
  }

  // output
  cout << ans << endl;
  return 0;

}