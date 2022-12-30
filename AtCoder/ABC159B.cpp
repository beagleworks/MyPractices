// ABC159B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  cin >> s;

  // solve
  auto isPalid = [=](int l, int r) -> bool {
    bool ret = true;
    while(l < r) {
      if (s[l] != s[r]) ret = false;
      l++, r--;
    }
    return ret;
  };

  int n = s.size();
  bool ans = false;
  if (isPalid(0, n-1) && isPalid(0, (n-1)/2-1) && isPalid(n+3/2-1, n-1)) ans = true;

  // output
  cout << (ans ? "Yes" : "No")<< endl;
  return 0;

}
// 普通にreverseにするほうが良い