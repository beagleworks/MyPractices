// ABC280
//

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

  // solve
  long long sum = 0L;
  for (int i=0; i<n; i++){
    int s;
    cin >> s;
    cout << s-sum << endl;
    sum = s;
  }

  return 0;
  
}