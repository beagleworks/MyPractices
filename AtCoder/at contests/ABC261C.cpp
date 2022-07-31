#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const long long LINF = 1e18;
 
int main(){
 
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  // input
  int N;
  cin >> N;
 
  unordered_map<string, int> names;
 
  // solve
  for (int i=0; i<N; i++){
    string s;
    cin >> s;
    int a = ++names[s];
    if (a == 1) cout << s << endl;
    else cout << s << "(" << names[s]-1 << ")" << endl;
  }
 
  return 0;
  
}