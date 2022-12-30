// ABC081C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  cin >> n >> k;
  
  map<int, int> mp;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    mp[a]++; 
  }

  // solve  
  priority_queue<int> X;
  for (auto [_,v] : mp) {
    X.emplace(v);
  }

  int ans = 0, cnt = 0;
  while (cnt < k && !X.empty()) {
    cnt++;
    ans += X.top();
    X.pop();
  }


  // output
  cout << n-ans << endl;
  return 0;

}