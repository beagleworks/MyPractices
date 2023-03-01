// ABC290B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  string s;
  cin >> n >> k >> s;

  // solve
  int cnt = 0;
  for (int i=0; i<n; i++) {
    if (s[i] == 'o' && cnt < k) {
      cout << s[i];
      cnt++;
    }
    else cout << 'x';
  }
  cout << endl;
  return 0;

}