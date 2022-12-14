// ABC279C
// https://atcoder.jp/contests/abc279/tasks/abc279_c

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

  vector<string> S(h), T(h);
  for (int i=0; i<h; i++) cin >> S[i];
  for (int i=0; i<h; i++) cin >> T[i];

  // solve
  vector<string> RS(w, ""), RT(w, "");

  for (int i=0; i<h; i++){
    for (int j=0; j<w; j++){
      RS[j] += S[i][j];
      RT[j] += T[i][j];
    }
  }

  sort(ALL(RS));
  sort(ALL(RT));

  // output
  cout << (RS == RT ? "Yes" : "No") << endl;
  return 0;
  
}
