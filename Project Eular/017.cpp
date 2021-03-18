#include <bits/stdc++.h>
using namespace std;

int main(){

  const int c_1to9 = 36;
  const int c_1to10 = 39;
  const int c_11to19 = 67;
  const int c_20to90_step10 = 46;
  const int c_hundred = 7;
  const int c_and = 3;
  const int c_1000 = 11; 

  int c_1to99 = c_1to10 + c_11to19 + c_20to90_step10 * 10 + c_1to9 * 8;

  int c_1to1000 = c_1to9 * 100 + c_hundred * 900 + c_and * 891 + c_1to99 * 10 + c_1000;
  cout << c_1to1000 << endl;
  return 0;
  
}