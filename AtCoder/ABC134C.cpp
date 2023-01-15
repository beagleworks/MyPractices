// ABC134C

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

  vector<int> V(n);
  priority_queue<int> A;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    V[i] = a;
    A.emplace(a);
  }

  // solve
  int b = A.top();
  A.pop();
  int c = A.top();

  // output
  for (int i=0; i<n; i++) {
    if (V[i] == b) cout << c << endl;
    else cout << b << endl;
  }
  return 0;

}