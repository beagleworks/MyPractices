// ABC294C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector<int> A(n), B(m);
  for (auto &a : A) cin >> a;
  for (auto &b : B) cin >> b;

  // solve
  vector<int> C(n+m);
  merge(ALL(A), ALL(B), C.begin());
  
  vector<int> ans_A, ans_B;
  for (int i=0; i<n; i++) {
    cout << lower_bound(ALL(C), A[i]) - C.begin() + 1 << '\n';
  }
  for (int i=0; i<m; i++) {
    cout << lower_bound(ALL(C), B[i]) - C.begin() + 1 << '\n';
  }

  return 0;

}