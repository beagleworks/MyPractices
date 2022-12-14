// ABC279E
// https://atcoder.jp/contests/abc279/tasks/abc279_e

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, m;
  cin >> n >> m;
  
  vector<int> A(m);
  for(auto& a: A) {
    cin >> a;
    a--;
  }

  // solve

  vector<int> B(n);
  iota(ALL(B), 1);

  // k回目を飛ばす 
  // -> k回目のswapに1が含まれていなければ、最後に1が行き着く先は変わらない
  // -> 含まれていれば、本来1とswapしていたであろう数字が行き着く先がこの回の1の行き先
  vector<int> ans(m);
  for (int i=0; i<m; i++){
    if (B[A[i]] == 1 || B[A[i]+1] == 1) {
      ans[i] = B[A[i]] == 1 ? B[A[i]+1] : B[A[i]];
    }
    else ans[i] = 1;
    swap(B[A[i]], B[A[i]+1]);
  }
  
  vector<int> C(n+1);
  for (int i=0; i<n; i++){
    C[B[i]] = i;
  }


  for (auto x: ans) cout << C[x]+1 << endl;

  return 0;
  
}