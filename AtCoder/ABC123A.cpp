// ABC123A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, _, e, k;
  cin >> a >> _ >> _ >> _ >> e >> k;


  // output
  cout << (abs(a-e) <= k ? "Yay!" : ":(") << endl;
  return 0;

}