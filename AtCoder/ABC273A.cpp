// ABC273A

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

  // solve
  auto f = [=](auto self, int x){
    if (x == 0) return 1;
    return x*self(self, x-1); 
  };

  int ans = f(f, n);

  // output
  cout << ans << endl;
  return 0;

}