// ABC312C

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

  vector<int> A(n), B(m);
  for (auto &a : A) cin >> a;
  for (auto &a : B) cin >> a;

  // solve
  auto cntA = [&](int pri) {
    int res = 0;
    for (auto ap : A) {
      if (pri >= ap) res++;
    }
    return res;
  };

  auto cntB = [&](int pri) {
    int res = 0;
    for (auto bp : B) {
      if (pri <= bp) res++;
    }
    return res;
  };

  int left = 0, right = INF;
  while (right - left > 1) {
    int64_t mid = (left + right) / 2;
    if (cntA(mid) < cntB(mid)) left = mid;
    else right = mid;
  }

  cout << right << endl;

  return 0;

}