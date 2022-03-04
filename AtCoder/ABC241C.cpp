// ABC241C
// https://atcoder.jp/contests/abc241/tasks/abc241_c

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int N;
  cin >> N;

  vector<vector<char>> field(N, vector<char>(N));
  for (int i=0; i<N; i++){
    for (int j=0; j<N; j++){
      cin >> field[i][j];
    }
  }

  // solve  
  bool ans = false;

  for (int i=0; i<N; i++){
    for (int j=0; j<N; j++){

      // row
      if (j+6 <= N){
        int cnt = 2;
        for (int k=0; k<6; k++){
          if (field[i][j+k] == '.') cnt--;
        }
        if (cnt >= 0) ans = true;
      }

      // col
      if (i+6 <= N){
        int cnt = 2;
        for (int k=0; k<6; k++){
          if (field[i+k][j] == '.') cnt--;
        }
        if (cnt >= 0) ans = true;
      }

      // diag '\'
      if (i+6 <= N && j+6 <= N){
        int cnt = 2;
        for (int k=0; k<6; k++){
          if (field[i+k][j+k] == '.') cnt--;
        }
        if (cnt >= 0) ans = true;
      }

      // diag '/'
      if (i >= 5 && j+6 <= N){
        int cnt = 2;
        for (int k=0; k<6; k++){
          if (field[i-k][j+k] == '.') cnt--;
        }
        if (cnt >= 0) ans = true;
      }

    }
  }

  // output
  if (ans) cout << "Yes" << '\n';
  else cout << "No" << '\n';
  return 0;
  
}