// CODE-FESTIVAL-2017_qual_A_A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  cin >> s;

  // solve
  if (s.size() < 4) {
    cout << "No" << endl;
    return 0;
  }

  cout << (s.substr(0,4) == "YAKI" ? "Yes" : "No") << endl;
  return 0;

}