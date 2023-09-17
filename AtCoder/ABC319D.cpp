// ABC319D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  int mx = *max_element(ALL(A));

  long ng = mx-1, ok = LINF;
  while (ok - ng > 1) {
    long mid = (ng + ok) / 2;
    int cnt = 1;
    long sum = 0;
    for (int i=0; i<n; i++) {
      if (i == 0) sum = A[i];
      else if (sum + 1 + A[i] > mid) {
        cnt++;
        sum = A[i];
      }
      else sum += 1 + A[i];
    }

    if (cnt <= m) ok = mid;
    else ng = mid;
  }

  // output
  cout << ok << endl;
  return 0;

}