// ABC088A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, a;
  cin >> n >> a;

  // output
  cout << (n%500 <= a ? "Yes" : "No") << endl;
  return 0;

}