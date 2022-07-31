#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const long long LINF = 1e18;
 
int main(){
 
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  // input
  int L1, R1, L2, R2;
  cin >> L1 >> R1 >> L2 >> R2;
 
  // solve
  if ((L1 < L2 && R1 > R2) || (L1 > L2 && R1 < R2)) cout << min(R1-L1, R2-L2) << endl;
  else if ((L2 >= R1) || (L1 >= R2)) cout << 0 << endl;
  else cout << min(abs(R2-L1), abs(L2-R1)) << endl;
 
  return 0;
  
}