// Typical90_048

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  vector<int> score;
  for (int i=0; i<n; i++) {
    int a, b;
    cin >> a >> b;
    score.emplace_back(b);
    score.emplace_back(a-b);
  }

  // solve
  sort(ALL(score), greater<int>());
  int64_t ans = 0;

  for (int i=0; i<k; i++) {
    ans += score[i];
  }

  // output
  cout << ans << endl;
  return 0;

}