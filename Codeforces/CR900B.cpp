#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

bool f(int a, int b, int x){
  return ((3ll*x) % (a+b) > 0);
}

int main(){

  // input
  int t;
  cin >> t;

  vector<int> A = {0, 2, 3};
  for (int i=3; i<(int)2e5+10; i++) {
    int x = A[i-1]+1;
    while (true) {
      if (f(A[i-2], A[i-1], x)) {
        A.emplace_back(x);
        break;
      }
      else x++;
    }
  }

  // solve
  for (int i=0; i<t; i++) {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) cout << A[i] << (i == n ? '\n' : ' ');
  }

  return 0;

}