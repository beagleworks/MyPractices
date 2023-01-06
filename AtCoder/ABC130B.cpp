// ABC130B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, x;
  cin >> n >> x;
  
  // solve
  int ans = 1;
  int pre = 0;
  for (int i=0; i<n; i++) {
    int l;
    cin >> l;
    int b = pre + l;
    if (b <= x) ans++;
    pre = b;
  }


  // output
  cout << ans << endl;
  return 0;

}