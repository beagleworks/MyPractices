// ABC153B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int h, n;
  cin >> h >> n;
  int sum = 0;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    sum += a;
  }

  // output
  cout << (sum >= h ? "Yes" : "No") << endl;
  return 0;

}