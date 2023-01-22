// ABC092C(ARC093A)

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

  vector<int> A(n);
  int sum = 0;
  int pre = 0;
  for (auto &a : A) {
    cin >> a;
    sum += abs(a - pre);
    pre = a;
  }
  sum += abs(A[n-1]);

  // solve
  for (int i=0; i<n; i++) {
    int ans = sum;
    if (i == 0) ans += abs(A[1]) - abs(A[0]) - abs(A[1] - A[0]);
    else if (i == n-1) ans += abs(A[n-2]) - abs(A[n-1]) - abs(A[n-1] - A[n-2]);
    else ans += abs(A[i+1] - A[i-1]) - abs(A[i] - A[i-1]) - abs(A[i+1] - A[i]);
    cout << ans << endl;
  }

  return 0;

}