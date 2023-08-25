// ABC315B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int m;
  cin >> m;

  vector<int> A(m);
  int sum = 0;
  for (auto &a : A) {
    cin >> a;
    sum += a;
  }

  // solve
  int hf = (sum+1) / 2;
  for (int i=0; i<m; i++) {
    if (hf - A[i] > 0) {
      hf -= A[i];
    }
    else {
      cout << i+1 << " " << hf << endl;
      return 0;
    }
  }
}