// ABC288A

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
  for (int i=0; i<n; i++) {
    int a, b;
    cin >> a >> b;
    cout << a+b << endl;
  }

  return 0;

}