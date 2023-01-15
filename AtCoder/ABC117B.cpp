// ABC117B

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

  vector<int> L(n);
  int sum = 0;
  for (auto &l : L) {
    cin >> l;
    sum += l;
  }

  // solve
  sort(ALL(L));
  sum -= L[n-1];

  // output
  cout << (L[n-1] < sum ? "Yes" : "No") << endl;
  return 0;

}