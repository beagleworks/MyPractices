// ABC123B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  // solve
  int arr[5] = {a, b, c, d, e};
  int last = a;
  for (int i=1; i<5; i++) {
    if (last % 10 > arr[i] % 10 && arr[i] % 10 != 0) last = arr[i];
  }
  
  int ans = 0;
  bool uselast = false;
  for (int i=0; i<5; i++) {
    if (!uselast && last == arr[i]) {
      uselast = true;
      continue;
    }
    ans += (arr[i] % 10 == 0 ? arr[i] : (arr[i]/10)*10+10);
  }
  
  ans += last;
  

  // output
  cout << ans << endl;
  return 0;

}