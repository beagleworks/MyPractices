// ABC043C(ARC059A)

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

  int sum = 0;
  vector<int> A(n);
  for (auto &a : A) {
    cin >> a;
    sum += a;
  }

  // solve
  int ans = INF;
  for (int x=-100; x<=100; x++) {
    int tmp = 0;
    for (int i=0; i<n; i++) {
      tmp += (A[i]-x) * (A[i]-x);
    }
    ans = min(ans, tmp);
  }


  // output
  cout << ans << endl;
  return 0;

}