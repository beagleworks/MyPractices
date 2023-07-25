// ABC206A

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

  // solve
  int ans = n * 1.08;

  // output
  cout << (ans < 206 ? "Yay!" : ans > 206 ? ":(" : "so-so") << endl;
  return 0;

}