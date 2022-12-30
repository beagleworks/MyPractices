// ABC122A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  char b;
  cin >> b;

  // solve
  char ans;
  switch (b) {
    case 'A' : 
      ans = 'T';
      break;
    case 'T' : 
      ans = 'A';
      break;
    case 'C' : 
      ans = 'G';
      break;
    case 'G' :
      ans = 'C';
      break;
  }

  // output
  cout << ans << endl;
  return 0;

}