// ABC304B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string n;
  cin >> n;

  // output
  cout << n.substr(0,3);
  for (int i=3; i<(int)n.size(); i++) cout << "0";
  cout << endl;
  return 0;

}