// DP_B
// https://atcoder.jp/contests/dp/tasks/dp_b

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int N, K;
  cin >> N >> K;
  vector<int> H(N);
  for (int i=0; i<N; i++){
    cin >> H[i];
  }

  // solve
  vector<int> C(N, INF);
  C[0] = 0;
  for (int i=1; i<N; i++){
    for (int u=1; u<=K && u<=i; u++){
      C[i] = min(C[i], C[i-u]+abs(H[i-u]-H[i]));
    }
  }

  // output
  cout << C[N-1] << '\n';
  return 0;
  
}
