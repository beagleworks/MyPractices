// ABC065B

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

  vector<int> A(n);
  for (auto& a: A) {
    cin >> a;
    a--;
  }

  // solve
  vector visited(n, false);
  int ans = 0, cur = 0;
  visited[0] = true;
  
  while (true) {
    ans++;
    cur = A[cur];

    if (cur == 1) break;

    if (visited[cur] == true) {
      ans = -1;
      break;
    }

    visited[cur] = true;    
  }

  // output
  cout << ans << endl;
  return 0;

}