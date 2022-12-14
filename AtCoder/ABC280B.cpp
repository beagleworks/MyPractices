// ABC280B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  cin >> n;

  vector<int> S(n);
  for (auto& s: S) cin >> s;

  // solve
  long long pre = 0;
  for (auto s: S) {
    cout << s - pre << endl;
    pre = s;
  }
  
  return 0;

}