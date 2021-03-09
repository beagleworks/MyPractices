#include <bits/stdc++.h>
using namespace std;

unordered_map<long, int> memo;

int collatz(long n){

  if (n == 1) return 1;
  else if (memo.count(n) != 0) return memo[n];
  else if (n % 2 == 0) return memo[n] = collatz(n/2) + 1;
  else return memo[n] = collatz(3*n+1) + 1;
}

int main(){

  int ans;
  int longest_terms = 0;

  for (long i=2; i<1000000; i++){
    int x = collatz(i);
    if (longest_terms <= x){
      longest_terms = x;
      ans = i;
    }
  }

  cout << ans << endl;
  return 0;

}
