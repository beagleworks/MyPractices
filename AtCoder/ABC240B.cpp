// ABC240B
// https://atcoder.jp/contests/abc240/tasks/abc240_b

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int N;
  cin >> N;
  vector<int> v(N);
  for (int i=0; i<N; i++){
    cin >> v[i];
  }

  // solve
  sort(ALL(v));
  v.erase(unique(ALL(v)), v.end());

  // output
  cout << v.size() << '\n';
  return 0;
  
}