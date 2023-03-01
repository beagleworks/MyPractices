// ABC023B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  int ans = -1;
  if (s == "b") ans = 0;
  else {
    string t = "b";
    for (int i=1; i<=(n-1)/2; i++) {
      if (i % 3 == 1) t = "a" + t + "c";
      else if (i % 3 == 2) t = "c" + t + "a";
      else t = "b" + t + "b";
    }
    if (s == t) ans = (n-1)/2;
  }

  // output
  cout << ans << endl;
  return 0;

}