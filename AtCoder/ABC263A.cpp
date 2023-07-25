// ABC263A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  vector<int> A(5);
  for (auto &a : A) cin >> a;

  // solve
  sort(ALL(A));
  bool ans = false;
  if ((A[0] == A[1] && A[2] == A[4]) || (A[0] == A[2] && A[3] == A[4])) ans = true;

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}