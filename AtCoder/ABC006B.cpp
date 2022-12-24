// ABC006B

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
  const int dv = 10007;

  vector memo(n, -1);
  memo[0] = memo[1] = 0;
  memo[2] = 1;
  auto tri = [&](auto self, int x){
    if (memo[x] != -1) return memo[x]; 
    return memo[x] = (self(self, x-1) + self(self, x-2) + self(self, x-3)) % dv;
  };

  // output
  cout << tri(tri, n-1) << endl;
  return 0;

}