// ABC241B
// https://atcoder.jp/contests/abc241/tasks/abc241_b

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int N, M;
  cin >> N >> M;
  vector<int> a(N);
  for (int i=0; i<N; i++){
    cin >> a[i];
  }

  // solve
  for (int d=0; d<M; d++){
    int b;
    cin >> b;

    bool f = false;
    for (int i=0; i<N; i++){
      if (a[i] == b){
        a[i] = -1;
        f = true;
        break;
      }
    }

    if (!f){
      cout << "No" << '\n';
      return 0;
    }
  }

  // output
  cout << "Yes" << '\n';
  return 0;
  
}