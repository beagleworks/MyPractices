// ABC243B
// https://atcoder.jp/contests/abc243/tasks/abc243_b

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int N;
  cin >> N;

  vector<int> A(N), B(N);
  for (int i=0; i<N; i++) cin >> A[i];
  for (int i=0; i<N; i++) cin >> B[i];

  // solve
  int ans_hit = 0, ans_blow = 0;
  for (int i=0; i<N; i++){
    for (int j=0; j<N; j++){
      if (A[i] == B[j]){
        if (i == j) ans_hit++;
        else ans_blow++;
      }
    }
  }

  // output
  cout << ans_hit << '\n' << ans_blow << '\n';
  return 0;
  
}
