// ABC077C(ARC084A)
// https://atcoder.jp/contests/abc077/tasks/arc084_a

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

  vector<int> A(n), B(n), C(n);

  for (auto& a: A) cin >> a;
  for (auto& b: B) cin >> b;
  for (auto& c: C) cin >> c;

  // solve
  sort(ALL(A));
  sort(ALL(B));
  sort(ALL(C));

  long long ans = 0LL;
  for (auto b: B){
    auto a = lower_bound(ALL(A), b);
    auto c = upper_bound(ALL(C), b);
    ans += (a - A.begin()) * (C.end() - c);
    
  }

  // output
  cout << ans << endl;
  return 0;
  
}