// ABC107B

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

  vector<string> A(h);
  for (auto &a : A) cin >> a;

  // solve
  vector H(h, true), W(w, true);
  for (int i=0; i<h; i++) {
    if (A[i] == string(w, '.')) H[i] = false;
      
  }

  for (int j=0; j<w; j++) {
    string s = "";
    for (int i=0; i<h; i++) {
      s += A[i][j];
    }
    if (s == string(h, '.')) W[j] = false;
  }
  
  // output
  for (int i=0; i<h; i++) {
    if (!H[i]) continue;
    for (int j=0; j<w; j++) {
      if (!W[j]) continue;
      cout << A[i][j];
    }
    cout << endl;
  }
  return 0;

}