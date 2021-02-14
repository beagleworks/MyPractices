#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  vector<int> va(n);
  for (int i=0; i<n; i++){
    int a;
    cin >> a;
    va[i] = a;
  }

  vector<int> vb(va.begin(), va.end());
  sort(vb.begin(), vb.end());
  vb.erase(unique(vb.begin(), vb.end()), vb.end());

  for (auto x: va){
    cout << lower_bound(vb.begin(), vb.end(), x) - vb.begin() << endl;
  }

  return 0;
  
}