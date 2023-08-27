// ABC305B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  int arr[] = {0, 3, 4, 8, 9, 14, 23};

  // input
  char p, q;
  cin >> p >> q;

  // solve
  int a = p - 'A', b = q - 'A';
  int ans = abs(arr[a] - arr[b]);

  // output
  cout << ans << endl;
  return 0;

}