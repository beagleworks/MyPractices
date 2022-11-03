// ABC264A
// https://atcoder.jp/contests/abc264/tasks/abc264_a

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 1e9 + 7;
const long long LINF = 1e18;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  string s = "atcoder";
  int L, R;
  cin >> L >> R;

  // output
  cout << s.substr(L-1, R-L+1) << '\n';
  return 0;
  
}