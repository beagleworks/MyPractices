// ABC278A
// https://atcoder.jp/contests/abc278/tasks/abc278_a

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  // solve
  vector v(200, 0);
  for (int i=0; i<n; i++){
    int e;
    cin >> e;
    v[i] = e;
  }

  // output
  for (int i=0; i<n; i++) cout << v[i+k] << endl;
  return 0;
  
}
