// ABC111A

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
  if (n % 10 == 1) n += 8;
  else n -= 8;

  if (n/10%10 == 1) n += 80;
  else n -= 80;
  
  if (n /100 == 1) n += 800;
  else n -= 800;

  // output
  cout << n << endl;
  return 0;

}