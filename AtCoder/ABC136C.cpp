// ABC136C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  cin >> n;
  vector<int> H(n);
  for (auto &h : H) cin >> h;

  // solve
  bool ans = true;
  H[0]--;
  for (int i=1; i<n; i++) {
    if (H[i-1] < H[i]) H[i]--;
    if (H[i-1] > H[i]) ans = false;
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}