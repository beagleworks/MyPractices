// ABC109C

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

  set<int> dist;
  for (int i=0; i<n; i++) {
    int c;
    cin >> c;
    dist.emplace(abs(x-c));
  }

  // solve
  int ans = *(dist.begin());
  for (auto d : dist) {
    ans = gcd(d, ans);
  }

  // output
  cout << ans << endl;
  return 0;

}