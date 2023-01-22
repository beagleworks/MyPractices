// ABC042A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b, c;
  cin >> a >> b >> c;

  // solve
  vector<int> A = {a, b, c};
  sort(ALL(A));

  // output
  cout << (A[0] == A[1] && A[1] == 5 && A[2] == 7 ? "YES" : "NO") << endl;
  return 0;

}