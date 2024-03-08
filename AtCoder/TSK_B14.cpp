#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  int h = n/2;

  vector<long> S1;
  for (int bit=0; bit < (1 << h); bit++) {
    long sum = 0;
    for (int i=0; i<h; i++) {
      if (bit & (1<<i)) sum += A[i];
    }
    S1.emplace_back(sum);
  }

  vector<long> S2;
  for (int bit=0; bit < (1 << (n-h)); bit++) {
    long sum = 0;
    for (int i=0; i<n-h; i++) {
      if (bit & (1<<i)) sum += A[h+i];
    }
    S2.emplace_back(sum);
  }

  sort(ALL(S1));
  sort(ALL(S2));
  for (auto e : S1) {
    auto p = lower_bound(ALL(S2), k-e);
    if (p == S2.end()) continue;
    if (*p == k-e) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;

}