#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++){
    int a, b;
    cin >> a >> b;
    v[i] = make_pair(a, b);
  }

  sort(v.begin(), v.end(), [](const auto &x, const auto &y){
    return get<1>(x) < get<1>(y);
  });

  int t = 0;
  for (auto p: v){
    t += p.first;
    if (t > p.second){
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
  
}