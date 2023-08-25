// ABC301B

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
  for (auto &a : A) cin >> a;

  // solve
  for (int i=0; i<n; i++) {
    cout << A[i] << "\n";
    if (i == n-1) break;
    if (A[i] < A[i+1]) for (int j=1; A[i]+j<A[i+1]; j++) {
      cout << A[i]+j << "\n";
    }
    else for (int j=1; A[i]-j>A[i+1]; j++) {
      cout << A[i]-j << "\n";
    }
  }

  return 0;

}