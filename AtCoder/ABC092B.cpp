// ABC092B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, d, x;
  cin >> n >> d >> x;
  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  int ans = 0;
  for (auto a : A) {
    for (int i=0; i*a+1<=d; i++) {
      ans++;
    }
  }

  // output
  cout << ans+x << endl;
  return 0;

}