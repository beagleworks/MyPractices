// ABC301A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  int t = 0, a = 0;
  for (auto c : s) {
    if (c == 'T') t++;
    else a++;
    if (t >= (n+1)/2) {
      cout << "T" << endl;
      return 0;
    }

    if (a >= (n+1)/2) {
      cout << "A" << endl;
      return 0;
    }
  }
}