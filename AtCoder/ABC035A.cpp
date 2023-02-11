// ABC035A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int w, h;
  cin >> w >> h;

  // output
  cout << (w*3 == h*4 ? "4:3" : "16:9") << endl;
  return 0;

}