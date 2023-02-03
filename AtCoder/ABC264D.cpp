// ABC264D

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
  int ans = 0;
  string x = "atcoder";
  for (int i=0; i<7; i++) {
    int pos;
    for (int j=0; j<7; j++) {
      if (s[j] == x[i]) {
        pos = j;
        break;
      }
    }
    while (pos != i) {
      if (pos < i) {
        swap(s[pos], s[pos+1]);
        pos++;
      }
      else {
        swap(s[pos], s[pos-1]);
        pos--;
      }
      ans++;
    }
    
  }

  // output
  cout << ans << endl;
  return 0;

}