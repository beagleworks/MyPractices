#include <bits/stdc++.h>
using namespace std;

int divisorscounter(int x){
  int r = 0;
  for (int i=1; i*i<=x; i++){
    if (x%i == 0){
      r += 2;
      if (i*i == x) r--;
    }
  }
  return r;
}

int main(){

  int cnt = 1;
  long long tri = 0;

  while (1){
    tri += cnt;
    cnt++;
    if (divisorscounter(tri) >= 500){
      cout << tri << endl;
      return 0;
    }
  }  
}