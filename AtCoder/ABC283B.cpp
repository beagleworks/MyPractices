// ABC283B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  vector<int> A(n);
  for (auto &a : A) cin >> a;
  
  int q;
  cin >> q;

  // solve
  for (int i=0; i<q; i++) {
    int c, k;
    cin >> c >> k;
    k--;

    if (c == 1) {
      int x;
      cin >> x;
      A[k] = x;
    }

    else cout << A[k] << endl; 
  }

  return 0;

}