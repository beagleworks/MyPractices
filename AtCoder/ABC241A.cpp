// ABC241A
// https://atcoder.jp/contests/abc241/tasks/abc241_a

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  vector<int> a(10);
  for (int i=0; i<10; i++){
    cin >> a[i];
  }

  // output
  cout << a[a[a[0]]] << '\n';
  return 0;
  
}