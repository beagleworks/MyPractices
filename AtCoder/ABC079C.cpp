// ABC079C
// https://atcoder.jp/contests/abc079/tasks/abc079_c

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int n;
  cin >> n;

  // solve
  int a = n / 1000;
  int b = (n % 1000) / 100;
  int c = (n % 100) / 10;
  int d = n % 10;
  int nums[] = {a, b, c, d};

  for (int bit=0; bit<(1<<4); bit++){
    int tmp = nums[0];
    for (int i=0; i<3; i++){
      if (bit & (1<<i)) tmp += nums[i+1];
      else tmp -=nums[i+1];
    }
    if (tmp == 7){
      cout << nums[0];
      for (int i=0; i<3; i++){
        if (bit & (1<<i)) cout << "+";
        else cout << "-";
        cout << nums[i+1];
      }
      cout << "=7" << endl;
      return 0;
    }
  }
  
}