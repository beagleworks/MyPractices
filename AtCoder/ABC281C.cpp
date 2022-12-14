// ABC281C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  long long t;
  cin >> n >> t;

  vector<int> A(n);
  long long rnd = 0LL;
  for (auto& a: A) {
    cin >> a;
    rnd += a;
  }

  // solve
  long long x = t % rnd;
  long long sum = 0LL;  
  for (int i=0; i<n; i++) {
    sum += A[i];
    if (sum >= x) {
      cout << i+1 << " " << A[i] - (sum - x) << endl;
      return 0;
    } 
  }
}