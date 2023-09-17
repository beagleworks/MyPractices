// ABC

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int h, w;
  cin >> h >> w;
  
  vector<string> A(h), B(h);
  for (auto &a : A) cin >> a;
  for (auto &b : B) cin >> b;

  // solve
  vector<string> AA(2*h);
  for (int i=0; i<h; i++) {
    AA[i] = A[i] + A[i];
  }
  for (int i=0; i<h; i++) {
    AA[h+i] = A[i] + A[i];
  }

  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      bool f = true;
      for (int u=0; u<h; u++) {
        for (int v=0; v<w; v++) {
          if (AA[i+u][j+v] != B[u][v]) f = false;
        }
      }
      if (f) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  // output
  cout << "No" << endl;
  return 0;

}