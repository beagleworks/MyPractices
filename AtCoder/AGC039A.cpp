// AGC039A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  long long k;
  cin >> s >> k;

  // solve
  long long ans = 0;
  long long n = s.size();

  if (count(ALL(s),s[0]) == n) {
    cout << n * k / 2 << endl;
    return 0;
  }

  int head = 0, tail = 0;
  if (s.front() == s.back()) {
    for (int i=n-2; i>=0; i--) {
      if (s[i] != s[n-1]) {
        tail = n-(i+1);
        s = s.substr(0, i+1);
        break;
      }
    }
    for (int i=1; ; i++) {
      if (s[i] != s[0]) {
        head = i;
        s = s.substr(i);
        break;
      }
    }
  }


  char pre = s[0];
  int cnt = 1;
  for (int i=1; i<(int)s.size(); i++) {
    if (s[i] == pre) cnt++;
    else {
      if (cnt >= 2) ans += cnt / 2;
      cnt = 1;
      pre = s[i];
    } 
  }

  if (cnt >= 2) ans += cnt / 2;
  ans *= k;

  if (head > 0 && tail > 0) {
    ans += (k-1) * ((head+tail)/2) + head / 2 + tail / 2;  
  }

  // output
  cout << ans << endl;
  return 0;

}