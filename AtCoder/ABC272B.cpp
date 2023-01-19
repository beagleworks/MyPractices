// ABC272B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;
  
  vector A(m, vector<int>());
  for (int i=0; i<m; i++) {
    int k;
    cin >> k;
    A[i].emplace_back(k);
    for (int j=0; j<k; j++) {
      int x;
      cin >> x;
      x--;
      A[i].emplace_back(x);
    }
  }

  // solve
  vector V(n, vector(n, false));
  for (int i=0; i<m; i++) {
    for (int j=1; j<=A[i][0]; j++) {
      for (int k=j; k<=A[i][0]; k++) {
        V[A[i][j]][A[i][k]] = V[A[i][k]][A[i][j]] = true;
      }
    }
  }

  // output
  for (auto v : V) for (auto vv : v) if (!vv) {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;

}