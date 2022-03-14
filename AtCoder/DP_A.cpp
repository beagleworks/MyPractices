// DP_A
// https://atcoder.jp/contests/dp/tasks/dp_a

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int N;
  cin >> N;
  vector<int> H(N);
  for (int i=0; i<N; i++){
    cin >> H[i];
  }

  // solve
  vector<int> C(N);
  C[0] = 0;
  C[1] = abs(H[1]-H[0]);
  for (int i=2; i<N; i++){
    C[i] = min(C[i-1]+abs(H[i]-H[i-1]), C[i-2]+abs(H[i]-H[i-2]));
  }

  // output
  cout << C[N-1] << '\n';
  return 0;
  
}
