// ABC277C
// https://atcoder.jp/contests/abc277/tasks/abc277_c

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

  unordered_map<int, vector<int>> lad;
  for (int i=0; i<n; i++){
    int a, b;
    cin >> a >> b;
    lad[a].push_back(b);
    lad[b].push_back(a);
  }

  // solve
  set<int> st;
  int ans = 1;
  queue<int> q;
  for (auto b: lad[1]) q.push(b);

  while (!q.empty()){
    int dist = q.front();
    q.pop();
    
    if (st.count(dist) == 0){
      st.insert(dist);
      ans = max(dist, ans);
      for (auto b: lad[dist]) q.push(b);
    }
  }

  // output
  cout << ans << endl;
  return 0;
  
}
