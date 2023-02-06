// CF16-FINAL_A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int h, w;
  cin >> h >> w;

  // solve
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
    string s;
    cin >> s;
    if (s == "snuke") {
      cout << char('A'+j) << i+1 << endl;
      return 0;
    }
  }

}