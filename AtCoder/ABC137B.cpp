// ABC137B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int k, x;
  cin >> k >> x;

  // output
  for (int i=-k+1; i<k; i++)
  cout << x + i << endl;
  return 0;

}