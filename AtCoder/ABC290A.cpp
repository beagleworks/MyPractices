// ABC290A

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

  vector<int> A(n);
  for (auto &a : A) cin >> a;
  vector<int> B(m);
  for (auto &b : B) cin >> b;

  // solve
  int ans = 0;
  for (auto b : B) {
    ans += A[--b];
  }

  // output
  cout << ans << endl;
  return 0;

}