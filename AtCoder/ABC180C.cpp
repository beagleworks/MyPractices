#include <bits/stdc++.h>
using namespace std;

int main(){

  long long n;
  cin >> n;

  vector<long long> ans;
  for (int i=1; i<=sqrt(n); i++){
    if (n % i == 0){
      cout << i << endl;
      if (n/i != i){
        ans.push_back(n / i);
      }
    }
  }

  reverse(ans.begin(), ans.end());
  for(auto a : ans){
    cout << a << endl;
  }
  return 0;
  
}