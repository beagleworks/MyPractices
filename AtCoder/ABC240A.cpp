// ABC240A
// https://atcoder.jp/contests/abc240/tasks/abc240_a

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int a, b;
  cin >> a >> b;

  // solve & output
  if (b-a == 1 || (a == 1 && b == 10)){
    cout << "Yes" << '\n';
  }
  else cout << "No" << '\n';
  return 0;
  
}