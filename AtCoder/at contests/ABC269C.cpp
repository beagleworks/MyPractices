// ABC269C
// https://atcoder.jp/contests/abc269/tasks/abc269_c

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
  long long N;
  cin >> N;

  // solve
  bitset<64> bit(N);
  vector<long long> ons;

  bitset<64> x(1);
  for (int i=0; i<62; i++){
    if ((bit & x) != 0){
      ons.push_back((long long)x.to_ulong());
    }
    x <<= 1;
  }
  
  cout << 0 << endl;

  for (int bt = 1; bt < (1 << (int)ons.size()); bt++) {
      long long sum = 0;
      for (int i = 0; i < (int)ons.size(); i++) {
          long long mask = 1 << i;
          if (bt & mask) {
              sum += ons[i];
          }
      }
      if (sum > 0) cout << sum << endl;
  }

  return 0;
  
}