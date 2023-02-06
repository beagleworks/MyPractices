// ARC008B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  string name, kit;
  cin >> name >> kit;

  // solve
  map<char, int> nm, kt;
  for (auto c : name) nm[c]++;
  for (auto c : kit) kt[c]++;

  int ans = 0;
  for (char c = 'A'; c <= 'Z'; c++) {
    if (nm[c]) {
      if (!kt[c]) {
        ans = -1;
        break;
      }
      else ans = max(ans, (nm[c]+kt[c]-1)/kt[c]);
    }
  }
  

  // output
  cout << ans << endl;
  return 0;

}