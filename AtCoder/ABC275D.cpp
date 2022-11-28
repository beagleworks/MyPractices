// ABC275D
// https://atcoder.jp/contests/abc275/tasks/abc275_d

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

unordered_map<long long, long long> memo;

long long func(long long x){
  if (memo[x] != 0) return memo[x];
  else return memo[x] = func(x/2L) + func(x/3L);
}

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  long long n;
  cin >> n;

  // solve
  memo[0L] = 1L;
  long long ans = func(n);

  // output
  cout << ans << '\n';
  return 0;
  
}