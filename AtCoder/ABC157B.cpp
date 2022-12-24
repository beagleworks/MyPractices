// ABC157B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  vector Field(3, vector<int>(3));
  for (auto &f : Field) for (auto &a : f) cin >> a;
  int n;
  cin >> n;

  // solve
  for (int i=0; i<n; i++) {
    int b;
    cin >> b;
    for (auto &f : Field) for (auto &a : f) {
      if (b == a) a = 0;
    }
  }

  // output
  bool ans = false;
  for (int i=0; i<3; i++){
    if (Field[i][0] + Field[i][1] + Field[i][2] == 0) ans = true;
    if (Field[0][i] + Field[1][i] + Field[2][i] == 0) ans = true;
  }
  if (Field[0][0] + Field[1][1] + Field[2][2] == 0 || Field[2][0] + Field[1][1] + Field[0][2] == 0) ans = true;
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}