#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 1e9 + 7;
const long long LINF = 1e18;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int N;
  cin >> N;

  // solve
  vector A(N+1, 0);
  for (int i=1; i<=N; i++){
    cin >> A[i];
  }

  long long ans = 0LL;
  vector<int> X;
  for (int i=1; i<=N+1; i++){
    if (A[i] == i) X.push_back(i);
    else {
      int j = A[i];
      if (A[j] == i && i < j) ans++; 
    }
  }

  long long xs = X.size();
  ans += xs*(xs-1)/2;

  // output
  cout << ans << '\n';
  return 0;
  
}