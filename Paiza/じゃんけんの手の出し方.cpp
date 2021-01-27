/*
Rank A
All test cases passed
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

  int n, m;
  string s;
  cin >> n >> m >> s;

  int g = 0, c = 0, p = 0;
  for (char h : s){
    (h == 'G') ? g++ : (h == 'C') ? c++ : p++;
  }

  vector<pair<int, int>> hands;
  for (int i = 0; i <= n; i++){
    for (int j = 0; j <= n; j++){
      if (i * 2 + j * 5 == m && i + j <= n){
        hands.push_back({i, j});
      }
    }
  }

  int ans = 0;
  for (auto h : hands){
    ans = max(ans, (min(h.first, p) + min(h.second, g) + min(n - h.first - h.second, c)));
  }

  cout << ans << endl;
  return 0;

}