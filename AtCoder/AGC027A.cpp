// ABC027A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, x;
  cin >> n >> x;
  vector<int> A(n);  
  for (auto &a : A) cin >> a;

  // solve
  int ans = 0;
  sort(ALL(A));
  for (auto a : A) {
    if (x >= a) {
      x -= a;
      ans++;
    }
    else break;
  }

  // output
  if (x && ans == n) ans--;
  cout << ans << endl;
  return 0;

}