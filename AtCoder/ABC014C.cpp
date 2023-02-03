// ABC014C

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
  int len = 1000100;
  vector<int> V(len, 0);
  for (int i=0; i<n; i++) {
    int a, b;
    cin >> a >> b;
    V[a]++;
    V[b+1]--;
  }

  for (int i=1; i<len; i++) {
    V[i] += V[i-1];
  }

  // output
  cout << *max_element(ALL(V)) << endl;
  return 0;

}