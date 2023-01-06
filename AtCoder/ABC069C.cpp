// ABC069C

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
  int x4 = 0, rest = 0;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    if (a % 4 == 0) x4++;
    else if (a % 2 == 1) rest++;
  }

  // solve
  bool ans = false;
  if (x4 >= rest || (x4+rest == n && x4 == rest-1)) ans = true;


  // output
  cout << (ans ? "Yes" : "No")  << endl;
  return 0;

}