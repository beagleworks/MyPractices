// ABC066C(ARC077A)

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

  // output
  for (int i=n-1; i>=0; i-=2) {
    cout << A[i] << endl;
  }
  
  int st = (n % 2 == 0 ? 0 : 1);
  for (int i=st; i<n-1; i+=2) {
    cout << A[i] << endl;
  }

  return 0;

}