// ABC161B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, m;
  cin >> n >> m;
  vector<int> A(n);
  int sum = 0;
  for (auto &a : A) {
    cin >> a;
    sum += a;
  }

  // solve
  sort(ALL(A), greater<int>());
  bool ans = (4*m*A[m-1] >= sum);

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}