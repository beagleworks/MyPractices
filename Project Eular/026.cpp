#include <bits/stdc++.h>
using namespace std;

int main(){

  vector<int> v(400, 0);
  v[0] = 1;
  for (int i=0; i<1000; i++){
    
    for (int j=399; j>=0; j--){
      v[j] *= 2;
      if (v[j] / 10 == 1){
        v[j] %= 10;
        v[j+1]++;
      }
    }
  }

  cout << accumulate(v.begin(), v.end(), 0) << endl;
  return 0;
  
}
