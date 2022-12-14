// Typical90_004

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int h, w;
  cin >> h >> w;

  vector<int> R(h, 0), C(w, 0);
  vector A(h, vector(w, 0));
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      int a;
      cin >> a;
      A[i][j] = a;
      R[i] += a;
      C[j] += a;
    }
  }

  // output
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      cout << R[i]+C[j]-A[i][j] << " ";
    }
    cout << endl;
  }
  return 0;

}