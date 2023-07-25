// ABC009B

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

  // solve
  sort(ALL(A), greater<int>());
  for (auto a : A) {
    if (a != A[0]) {
      cout << a << endl;
      return 0;
    }
  }

}