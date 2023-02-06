//  CF16-FINAL_B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  if (n <= 2) {
    cout << n << endl;
    return 0;
  }
  
  int left = 0, right = n;
  while (right - left > 1) {
    long long mid = left + (right - left) / 2;
    if (mid*(mid-1)/2 < n) left = mid;
    else right = mid;
  }

  int st = right*(right-1)/2;
  for (int i = 0; true; i++) {
    int p = st - i;
    if (p == n) {
      for (int j=1; j<right; j++) {
        if (j != i) cout << j << '\n';  
      }
      return 0;
    }
  } 

}