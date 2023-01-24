// ABC089B

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
  bool ans = false;
  for (int i=0; i<n; i++) {
    char s;
    cin >> s;
    if (s == 'Y') ans = true;
  }

  // output
  cout << (ans ? "Four" : "Three") << endl;
  return 0;

}