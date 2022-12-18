// ABC064B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  vector<int> A(n);
  for (auto &a : A) cin >> a;
  sort(ALL(A));

  // output
  cout << A[n-1]-A[0] << endl;
  return 0;

}