// ABC319A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

const map<string, int> lst = {
  {"tourist", 3858},
  {"ksun48", 3679},
  {"Benq", 3658},
  {"Um_nik", 3648},
  {"apiad", 3638},
  {"Stonefeang", 3630},
  {"ecnerwala", 3613},
  {"mnbvmar", 3555},
  {"newbiedmy", 3516},
  {"semiexp", 3481},
};


int main(){

  // input
  string s;
  cin >> s;

  // output
  cout << lst.at(s) << endl;
  return 0;

}