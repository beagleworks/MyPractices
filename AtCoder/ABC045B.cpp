#include <bits/stdc++.h>
using namespace std;


int main(){

  vector<string> cards(3);
  cin >> cards[0] >> cards[1] >> cards[2];

  int turn = 0;
  while(1){
    if (cards[turn].size() == 0){
      cout << (char)(turn + 'A') << endl;
      return 0;
    }

    int nxt = cards[turn][0] - 'a';
    cards[turn] = cards[turn].substr(1);
    turn = nxt;

  }
  
}