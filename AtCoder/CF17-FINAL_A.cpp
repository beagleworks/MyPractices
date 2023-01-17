// CF17-FINAL_A

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
  bool ans = true;
  int cnt = 0;
  int n = s.size();
  
  if (s.substr(cnt, 4) == "AKIH") cnt += 4;
  else if (s.substr(cnt, 3) == "KIH") cnt += 3;
  else ans = false;

  if (ans && s.substr(cnt, 2) == "AB") cnt += 2;
  else if (ans && s[cnt] == 'B') cnt++;
  else ans = false;

  if (ans && s.substr(cnt, 2) == "AR") cnt += 2;
  else if (ans && s[cnt] == 'R') cnt++;
  else ans = false;

  if (cnt+2 <= n || (cnt+1 == n && s[cnt] != 'A')) ans = false;

  // output
  cout << (ans ? "YES" : "NO") << endl;
  return 0;

}