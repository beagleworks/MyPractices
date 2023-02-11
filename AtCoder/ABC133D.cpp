// ABC133D

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

  vector<int64_t> A(n);
  for (auto &a : A) cin >> a;

  // solve
  int64_t x = 0;
  for (int i=0; i<n; i++) {
    if (i % 2 == 0) x += A[i];
    else x -= A[i];
  }
  x /= 2;

  vector<int64_t> ans(n);
  ans[0] = x;
  for (int i=1; i<n; i++) {
    ans[i] = A[i-1] - ans[i-1];
  } 

  // output
  for (auto a : ans) cout << a*2 << endl;
  return 0;

}