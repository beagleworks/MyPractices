// ABC278D
// https://atcoder.jp/contests/abc278/tasks/abc278_d

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

  map<int, long long> diff;
  for (int i=0; i<n; i++){
    long long a;
    cin >> a;
    diff[i] = a;
  }

  int q;
  cin >> q;

  // solve
  long long common = 0L;
  for (int i=0; i<q; i++){
    int type, target;
    long long val;
    cin >> type;
    if (type == 1) {
      cin >> val;
      common = val;
      diff.clear();
    }
    else if (type == 2){
      cin >> target >> val;
      diff[target-1] += val;
    }
    else {
      cin >> target;
      cout << diff[target-1] + common << '\n';
    }
  }

  // output
  return 0;
  
}

// 別解
// 更新時間を保持し、リセット時間と比べる方法
