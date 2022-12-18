// ABC005D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  cin >> n;
  vector D(n, vector<int>(n));
  for (auto &d : D) for (auto &dd : d) cin >> dd;
  int q;
  cin >> q;
  vector<int> P(q);
  for (auto &p : P) cin >> p;

  // solve
  vector Sr(n, vector(n, 0)), Sc(n ,vector(n, 0));
  for (int i=0; i<n; i++) {
    for (int j=n-1; j>=0; j--) {
      if (j == n-1) for (int k=0; k<n-1; k++) {
        Sr[i][j] += D[i][k];
        Sc[i][j] += D[k][i];
      }
      else {
        Sr[i][j] = Sr[i][j+1] - D[i][j];
        Sc[i][j] = Sc[i][j+1] - D[j][i];
      }      
    }
  }

  vector S(n+1, vector(n+1, 0));
  for (int i=n-1; i>=0; i--) {
    for (int j=n-1; j>=0; j--) {
      if (i == n-1 && j == n-1) for (int i=0; i<n; i++) S[i][j] += Sr[i][n-1];
      else if (i == n-1) S[i][j] = S[i][j+1] - Sc[j+1][n-1];
      else if (j == n-1) S[i][j] = S[i+1][j] - Sr[i+1][n-1];
      else S[i][j] = S[i+1][j+1] - Sc[j+1][i+1] - Sr[i+1][j+1] + D[i+1][j+1];
    }
  }

  for (auto p : P) {
    queue<int> h, w;
    h.emplace(1), w.emplace(p);
    h.emplace(p), w.emplace(1);
    for (int i=2; i*i<=p; i++) {
      if (p%i == 0) {
        h.emplace(i), w.emplace(p/i);
        h.emplace(p/i), w.emplace(i);
      }
    }

    int ans = 0;
    while (!h.empty()){
      int H = h.front();
      int W = w.front();
      h.pop(), w.pop();
    
      for (int i=0; i+H<n; i++) {
        for (int j=0; j+W<n; j++) {
          ans = max(S[i][j]-S[i+H+1][j]-S[i][j+W+1]+S[i+H+1][j+W+1], ans);
        } 
      }
    }
    cout << ans << endl;  
  }

  // output

  return 0;

}