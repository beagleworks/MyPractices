// ABC275A
// https://atcoder.jp/contests/abc275/tasks/abc275_a

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
  int n;
  cin >> n;

  // solve
  int hmax = 0, ans = 0;
  for (int i=0; i<n; i++){
    int h;
    cin >> h;
    if (h > hmax){
      hmax = max(h, hmax);
      ans = i+1;
    }
  }

  // output
  cout << ans << '\n';
  return 0;
  
}