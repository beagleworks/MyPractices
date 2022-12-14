// ABC280A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  // solve
  int ans = 0;
  for (int i=0; i<n*m; i++) {
    char c;
    cin >> c;
    if (c == '#') ans++;
  }  

  // output
  cout << ans << endl;
  return 0;

}