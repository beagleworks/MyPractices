// ABC156C

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

  vector<int> X;
  int sum = 0;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    X.emplace_back(a);
    sum += a;
  }

  // solve
  int mid = sum / n;
  int d1 = 0, d2 = 0, d3 = 0;
  
  for (auto x: X) {
    d1 += (x-mid)*(x-mid);
    d2 += (x-mid-1)*(x-mid-1);
    d3 += (x-mid+1)*(x-mid+1);
  }

  // output
  cout << min({d1, d2, d3}) << endl;
  return 0;

}