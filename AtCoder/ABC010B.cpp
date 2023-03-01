// ABC010B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  int ans = 0;
  for (auto &a : A) {
    while (a % 3 == 2 || a % 2 == 0) {
      if (a % 3 == 2 || a % 2 == 0) {
        a--;
        ans++;
      }
    }
  }

  // output
  cout << ans << endl;
  return 0;

}