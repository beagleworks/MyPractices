// ABC155B

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
  bool ans = true;
  for (auto a : A) {
    if (a % 2 == 0) {
      if (a % 3 && a % 5) ans = false;
    }
  }

  // output
  cout << (ans ? "APPROVED" : "DENIED") << endl;
  return 0;

}