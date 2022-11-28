// ABC276C
// https://atcoder.jp/contests/abc276/tasks/abc276_c

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

  vector<int> P(n);
  for (auto& p: P) cin >> p;

  // solve
  prev_permutation(ALL(P));

  // output
  for (auto a: P) cout << a << endl;
  return 0;
  
}
