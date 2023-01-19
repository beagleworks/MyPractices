// ABC271B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 1e9 + 7;
const long long LINF = 1e18;

int main(){

  // input
  int n, q;
  cin >> n >> q;

  vector<vector<int>> v(n);
  for (int i=0; i<n; i++){
    int l;
    cin >> l;
    for(int j=0; j<l; j++){
      int x;
      cin >> x;
      v[i].push_back(x);
    }
  }

  // output
  for (int i=0; i<q; i++){
    int a, b;
    cin >> a >> b;
    cout << v[a-1][b-1] << endl;
  }

  return 0;
  
}
