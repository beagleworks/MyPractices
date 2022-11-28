// ABC277D
// https://atcoder.jp/contests/abc277/tasks/abc277_d

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

  //vector<int> A(n);
  multiset<int> mst;
  long long sum = 0L;
  for (int i=0; i<n; i++){
    int a;
    cin >> a;
    // A[i] = a;
    mst.insert(a);
    sum += a;
  }

  // solve
  long long ans = LINF;
  
  int cur = 0;
  long long outs = 0L;
  bool carry = false;

  long long firstOuts = 0L;
  if (mst.count(1) >= 1 && mst.count(m-1) >= 1) carry = true;

  for (auto e: mst){
    if (e == cur || e == cur + 1){
      outs += e;
    }

    else {
      ans = min(sum-outs, ans);
      if (firstOuts == 0L) firstOuts = outs;
      outs = (long long)e;
    }

    cur = e;
  }

  if (carry) ans = min(sum-firstOuts-outs, ans);
  else ans = min(sum-outs, ans);

  // output
  cout << ans << endl;
  return 0;
  
}

// 別解
// UnionFind (DSU) を利用
