// ABC309C

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

  vector<pair<int,int>> lst(n);
  int64_t sum = 0;
  for (int i=0; i<n; i++) {
    int a, b;
    cin >> a >> b;
    lst.emplace_back(a, b);
    sum += b;
  }

  // solve
  sort(ALL(lst));
  int idx = 0;
  while (sum > k) {
    sum -= lst[idx].second;
    idx++;
  }

  // output
  cout << lst[max(0, idx-1)].first+1 << endl;
  return 0;

}