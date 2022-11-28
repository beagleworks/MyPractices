// ABC104C
// https://atcoder.jp/contests/abc104/tasks/abc104_c

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int d, g;
  cin >> d >> g;

  vector<int> num(10), bonus(10);
  for (int i=0; i<d; i++){
    cin >> num[i] >> bonus[i];
  }

  // solve
  int ans = INF;
  for (int bit=0; bit<(1<<d); bit++){
    int score = 0, solve = 0;
    for (int i=0; i<d; i++){
      if (bit & (1 << i)){
        score += 100*(i+1)*num[i]+bonus[i];
        solve += num[i];
      }
    }

    if (score >= g){
      ans = min(solve, ans);
    }
    else {
      for (int i=d-1; i>=0; i--){
        if (~bit & (1 << i)){
          int aim = g - score;
          if (aim/(100*(i+1)) <= num[i]){
            ans = min(solve+(aim+(100*(i+1))-1)/(100*(i+1)), ans);
          }
        }
      }
    }
  }

  // output
  cout << ans << '\n';
  return 0;
  
}