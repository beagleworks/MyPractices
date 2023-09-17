// ABC319C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int arr[3][3];
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) cin >> arr[i][j]; 

  // solve
  int nine = 9*8*7*6*5*4*3*2;
  vector<int> vb = {1,2,3,4,5,6,7,8,9};
  int cnt = 0;
  do{
    bool f = false;
    vector field(3, vector(3, false));
    for(auto k : vb) {
      int y = (k-1)/3;
      int x = (k-1)%3;
      field[y][x] = true;

      int r = 0;
      for (auto t : field[y]) r += t;
      if (r == 2) {
        int memo = 0;
        for (int i=0; i<3; i++) {
          if (field[y][i]) {
            if (!memo) memo = arr[y][i];
            else if (memo == arr[y][i]) f = true;
          }
        }
      }

      int c = 0;
      for (int i=0; i<3; i++) c += field[i][x];
      if (c == 2) {
        int memo = 0;
        for (int i=0; i<3; i++) {
          if (field[i][x]) {
            if (!memo) memo = arr[i][x];
            else if (memo == arr[i][x]) f = true;
          }
        }
      }

      if ((y == 0 && x == 0) || (y == 1 && x == 1) || (y == 2 && x == 2)) {
        int n1 = 0;
        for (int i=0; i<3; i++) n1 += field[i][i];
        if (n1 == 2) {
          int memo = 0;
          for (int i=0; i<3; i++) {
            if (field[i][i]) {
              if (!memo) memo = arr[i][i];
              else if (memo == arr[i][i]) f = true;
            }
          }
        }
      }

      if ((y == 0 && x == 2) || (y == 1 && x == 1) ||( y == 2 && x == 0)) {
        int n2 = 0;
        for (int i=0; i<3; i++) n2 += field[i][2-i];
        if (n2 == 2) {
          int memo = 0;
          for (int i=0; i<3; i++) {
            if (field[i][2-i]) {
              if (!memo) memo = arr[i][2-i];
              else if (memo == arr[i][2-i]) f = true;
            }
          }
        }
      }
    }

    if (!f) cnt++;
  }
  while(next_permutation(ALL(vb)));

  // output
  printf("%.10f\n", (double)cnt/nine);
  return 0;

}