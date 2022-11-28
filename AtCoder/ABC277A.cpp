// ABC277A
// https://atcoder.jp/contests/abc277/tasks/abc277_a

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int n, x;
  cin >> n >> x;

  // solve
  for (int i=0; i<n; i++){
    int p;
    cin >> p;
    if (p == x) cout << i+1 << endl;
  }

  return 0;
  
}