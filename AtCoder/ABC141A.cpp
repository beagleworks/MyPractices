// ABC141A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input  
  string s;
  cin >> s;

  map<string, string> mp;
  mp["Sunny"] = "Cloudy";
  mp["Cloudy"] = "Rainy";
  mp["Rainy"] = "Sunny";


  // output
  cout << mp[s] << endl;
  return 0;

}