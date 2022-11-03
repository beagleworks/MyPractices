// ABC270C
// https://atcoder.jp/contests/abc270/tasks/abc270_c

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
  int n, x, y;
  cin >> n >> x >> y;

  vector<vector<int>> G(n);
  for (int i=0; i<n-1; i++){
    int a, b;
    cin >> a >> b;
    G[a-1].push_back(b-1);
    G[b-1].push_back(a-1);
  }  

  // solve
  vector seen(n, -1);
  stack<int> st;
  st.push(x-1);
  seen[x-1] = x-1;

  while(!st.empty()){
    int c = st.top();
    st.pop();
    for (auto p: G[c]){
      if (seen[p] == -1){
        st.push(p);
        seen[p] = c;
      }
    }
  }

  vector<int> ans;
  ans.push_back(y-1);
  int pre = y-1;
  while (1){
    int cp = seen[pre];
    ans.push_back(cp);
    pre = cp;
    if (cp == x-1) break;
  }

  reverse(ALL(ans));

  // output
  for (auto a: ans) cout << a+1 << " ";
  return 0;
  
}