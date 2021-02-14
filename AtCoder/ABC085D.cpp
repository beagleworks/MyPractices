#include <bits/stdc++.h>
using namespace std;

int main(){

  int n, h;
  cin >> n >> h;

  int ans = 0;
  int c = 0;
  vector<int> t;

  for (int i=0; i<n; i++){
    int a, b;
    cin >> a >> b;
    c = max(a, c);
    t.push_back(b);
  }

  sort(t.begin(), t.end(), greater<int>());

  for (auto x: t){
    if (x < c) break;
    h -= x;
    ans++;
    if (h <= 0){
      cout << ans << endl;
      return 0;
    }
  }

  ans += (h+c-1) / c;
  cout << ans << endl;
  return 0;
  
}