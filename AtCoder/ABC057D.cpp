// ABC057D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

vector memo(51, vector<long long>(51, 0));
long long C(int n, int r){
  if (memo[n][r]) return memo[n][r];
  if (r == 1) return memo[n][r] = n;
  if (n == r) return memo[n][r] = 1;
  return memo[n][r] = C(n-1, r-1)+C(n-1, r);
}
int main(){

  // input
  int n, a, b;
  cin >> n >> a >> b;
  vector<long long> V(n);
  for (auto &v : V) cin >> v;

  // solve
  long long ans = 0LL;
  sort(ALL(V), greater<long long>());
  long long sum = 0;
  for (int i=0; i<a; i++) {
    sum += V[i];
  }
  double avr = (double)sum / a;

  int cnt = 0, cntIn = 0;
  for (int i=0; i<n; i++) {
    if (V[i] == V[a-1]) {
      cnt++;
      if (i <= a-1) cntIn++;
    }
  }

  int N = cnt;
  if (N > 1 && V[0] == V[a-1]) {
    int mx = min(b, N);
    for (int i=mx; i>=a; i--) {
      ans += C(N, i);
    }
  }
  else {
    ans = C(N, cntIn);
  }
  
  // output
  printf("%.10f\n", avr);
  cout << ans << endl;
  return 0;

}