// ABC121C

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

  vector<pair<long long, int>> V(n);
  for (auto &[a, b] : V) {
    cin >> a >> b;
  }

  // solve
  sort(ALL(V));
  long long ans = 0;
  int cnt = 0;
  for(int i=0; i<n; i++) {
    if (cnt + V[i].second >= m) {
      ans += V[i].first * (m - cnt);
      break;
    }
    else {
      cnt += V[i].second;
      ans += V[i].first * V[i].second;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}