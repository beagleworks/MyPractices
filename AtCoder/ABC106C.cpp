// ABC106C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  long long k;
  cin >> s >> k;
  k--;

  // solve
  for (int i=0; i<(int)s.size(); i++) {
    if (s[i] != '1') {
      cout << s[i] << endl;
      break;
    }
    else {
      if (i == k) {
        cout << 1 << endl;
        break;
      } 
    }
  }
  
  return 0;

}