// AGC007A

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

  int cnt = 0;
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
    char c;
    cin >> c;
    if (c == '#') cnt++;
  }

  // solve
  int best = h + w -1;


  // output
  cout << (cnt == best ? "Possible" : "Impossible") << endl;
  return 0;

}