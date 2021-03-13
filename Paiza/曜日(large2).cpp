/*
Rank A
All test cases passed
フェアフィールドの公式を参考に改変し、paiza歴に対応
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    long y, m, d;
    cin >> y >> m >> d;

    int p = (y*360 + (bool)y + (y-1)/4 - (y-1)/100 + (y-1)/400 + (m-1)*30 + d) % 7;
    string s[] = {"水", "木", "金", "土", "日", "月", "火"};
    cout << s[p] << "曜日" << endl;
    
    return 0;
}