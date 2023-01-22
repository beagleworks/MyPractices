// ABC128B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
#define PSI pair<string, int>
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;


int main(){

  // input
  int n;
  cin >> n;
  
  vector<PSI> A;
  map<PSI, int> orig;
  for (int i=0; i<n; i++) {
    string s;
    int p;
    cin >> s >> p;
    A.emplace_back(s, p);
    orig[{s, p}] = i+1;
  }

  // solve
  vector B = A;
  sort(ALL(B), [](auto x, auto y){
    return (x.first == y.first ? x.second > y.second : x.first < y.first);
  });

  // output
  for (int i=0; i<n; i++) {
    cout << orig[B[i]] << endl;
  }
  return 0;

}