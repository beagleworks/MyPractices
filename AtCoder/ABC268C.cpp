// ABC268C
// https://atcoder.jp/contests/abc268/tasks/abc268_c

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

  vector<int> dishes(N);
  for (auto& x: dishes) cin >> x;

  // solve
  vector<int> ans(N, 0);
  for (int i=0; i<N; i++){
    int d = (dishes[i]-i+N) % N;
    ans[(d-1+N)%N]++;
    ans[d]++;
    ans[(d+1)%N]++;
  }

  // output
  int a = *max_element(ALL(ans));
  cout << a << endl;
  return 0;
  
}