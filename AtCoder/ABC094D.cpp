// ABC094D(ARC095B)

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
  sort(ALL(A));
  if (n == 2) {
    cout << A[1] << " " << A[0] << endl;
    return 0;
  }

  int i = A[n-1];
  auto r = lower_bound(ALL(A), i/2);
  int diff = abs(i/2-*r);
  int j = *r;
  if (diff > abs(i/2-*(--r))) j = *r;

  // output
  cout << i << " " << j << endl;
  return 0;

}