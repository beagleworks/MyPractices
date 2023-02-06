// ABC041C

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

  vector<pair<int, int>> A(n);
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    A.emplace_back(a, i+1);
  }

  // solve
  sort(ALL(A), greater<pair<int,int>>());

  // output
  for (int i=0; i<n; i++) {
    cout << A[i].second << endl;
  }

  return 0;

}