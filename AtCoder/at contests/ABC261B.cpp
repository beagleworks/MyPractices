#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const long long LINF = 1e18;
 
int main(){
 
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  // input
  int N;
  cin >> N;
 
  vector<vector<char>> A(N, vector<char>(N));
  for (auto& a: A) for (auto& aa: a) cin >> aa;
 
  // solve
  bool f = true;
  for (int i=0; i<N; i++){
    for (int j=0; j<N; j++){
      if (i == j) continue;
      if ((A[i][j] == 'D' && A[j][i] != 'D') || (A[i][j] == 'W' && A[j][i] != 'L') || (A[i][j] == 'L' && A[j][i] != 'W')) f = false;
    }
  }
 
  if (f) cout << "correct" << endl;
  else cout << "incorrect" << endl;
  return 0;
  
}