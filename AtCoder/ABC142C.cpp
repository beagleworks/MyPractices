// ABC142C

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

  // solve
  vector<int> A(n);
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    a--;
    A[a] = i+1;
  }

  // output
  for (auto a : A) cout << a << endl;
  return 0;

}