// ABC201C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int o = 0, x = 0, q = 0;
  for (int i=0; i<10; i++) {
    char s;
    cin >> s;
    if (s == 'o') o++;
    else if (s == 'x') x++;
    else q++; 
  }
  
  // solve
  if (o > 4) {
    cout << 0 << endl;
    return 0;
  }

  switch (o) {
    case 4:
      cout << 4 * 3 * 2 << endl;
      break;
    case 3:
      cout << 6 * 6 + 4 * q * 6 << endl;
      break;
    case 2:
      cout << 4 * 2 + 6 + q * 4 * 3 * 2 + 6 * q * q * 2 << endl;
      break;
    case 1:
      cout << 1 + 4 * q + 4 * q * q * q + 6 * q * q << endl;
      break;
    default:
      cout << q * q * q * q << endl;
      break;
    
  }

  return 0;

}