#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  vector<vector<char>> field(n, vector<char>(n));
  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
      char c;
      cin >> c;
      field[i][j] = c;
    }
  }

  for (int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout << field[n-1-j][i];
    }
    cout << endl;
  }

  return 0;
  
}