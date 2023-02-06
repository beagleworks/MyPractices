// ABC146C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

template<typename T, typename U> T myPow(T a, U b) {
  T ret = a;
  for (U i = 1; i < b; i++) ret *= a; 
  return ret;
}

int main(){

  // input
  long long a, b, x;
  cin >> a >> b >> x;

  // solve
  int y = 1;
  vector<long long> price;
  for (int i=0; i<=9; i++) {
    price.emplace_back(a*y+b*(i+1));
    y *= 10;  
  }

  auto p = lower_bound(ALL(price), x);
  int t = distance(price.begin(), p);

  if (a*myPow(10,9)+b*10 <= x) {
    cout << myPow(10,9) << endl;
    return 0;
  }

  for (int i=myPow(10,t)-1; true; i--) {
    long long z = a*i + b*t;
    if (z <= x) {
      cout << i << endl;
      return 0;
    }
  }
}