// ABC126A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  string s;
  cin >> n >> k >> s;

  // solve
  s[k-1] += 32; 

  // output
  cout << s << endl;
  return 0;

}