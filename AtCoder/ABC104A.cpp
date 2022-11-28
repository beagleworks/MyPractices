// ABC104A
// https://atcoder.jp/contests/abc104/tasks/abc104_a

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
  int r;
  cin >> r;

  // solve
  if (r < 1200) cout << "ABC" << endl;
  else if (r < 2800) cout << "ARC" << endl;
  else cout << "AGC" << endl;

  return 0;
  
}