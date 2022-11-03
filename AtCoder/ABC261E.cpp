// ABC261E
// https://atcoder.jp/contests/abc261/tasks/abc261_e

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const long long LINF = 1e18;
 
int main(){
 
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  // input
  int N, C;
  cin >> N >> C;

  int bitzero = 0;
  long long bitone = ~0;
  for (int i=0; i<N; i++){
    int T, A;
    cin >> T >> A;

    if (T == 1){
      bitzero &= A;
      bitone &= A;
    }
    else if (T == 2){
      bitzero |= A;
      bitone |= A;
    }
    else {
      bitzero ^= A;
      bitone ^= A;
    }
    
    int CC = ~C;
    C &= bitone;
    CC &= bitzero;
    C |= CC;
    cout << C << endl;
  
  }
  
  return 0;
  
}