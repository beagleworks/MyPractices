// ABC088C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  vector C(3, vector<int>(3));
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) cin >>C[i][j];

  // solve
  // a0 = 0とする
  int d1 = C[1][0] - C[0][0], d2 = C[2][0] - C[0][0];
  if (C[1][1] == d1+C[0][1] && C[1][2] == d1+C[0][2] && C[2][1] == d2+C[0][1] && C[2][2] == d2+C[0][2]){
    cout << "Yes" << endl;
  } 
  else cout << "No" << endl;
  return 0;

}