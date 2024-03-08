#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
using ll = long long;

int t;
void input(){
  cin >> t;
}

void solve(){
  int a, b, c;
  cin >> a >> b >> c;
  if (a < b) swap(a, b);
  double d = a - (a+b) / 2.0;
  cout << ceil(d/c) << endl;
  return;
}
int main(){

  input();

  for (int i=0; i<t; i++) solve();

  return 0;

}