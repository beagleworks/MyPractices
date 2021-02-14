#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  set<int> st;
  for (int i=0; i<n; i++){
    int a;
    cin >> a;
    st.insert(a);
  }

  cout << st.size() << endl;
  return 0;
  
}
