#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int t;
  cin >> t;

  // solve
  for (int i=0; i<t; i++) {
    int n, k;
    cin >> n >> k;
    
    bool ans = false;
    for (int i=0; i<n; i++) {
      int a;
      cin >> a;
      if (a == k) ans = true;
    }
    
    cout << (ans ? "Yes" : "No") << endl;

  }
  
  return 0;

}