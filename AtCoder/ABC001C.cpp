// ABC001C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int d, w;
  cin >> d >> w;

  // solve
  string dir;
  int wd = 0;

  if (d >= 3488) dir = "N";
  else if (d >= 3263) dir = "NNW";
  else if (d >= 3038) dir = "NW";
  else if (d >= 2813) dir = "WNW";
  else if (d >= 2588) dir = "W";
  else if (d >= 2363) dir = "WSW";
  else if (d >= 2138) dir = "SW";
  else if (d >= 1913) dir = "SSW";
  else if (d >= 1688) dir = "S";
  else if (d >= 1463) dir = "SSE";
  else if (d >= 1238) dir = "SE";
  else if (d >= 1013) dir = "ESE";
  else if (d >= 788) dir = "E";
  else if (d >= 563) dir = "ENE";
  else if (d >= 338) dir = "NE";
  else if (d >= 113) dir = "NNE";
  else dir = "N";

  double sc = round(w / 6.0) / 10.0;
  if (sc <= 0.2) wd = 0;
  else if (sc <= 1.5) wd = 1;
  else if (sc <= 3.3) wd = 2;
  else if (sc <= 5.4) wd = 3;
  else if (sc <= 7.9) wd = 4;
  else if (sc <= 10.7) wd = 5;
  else if (sc <= 13.8) wd = 6;
  else if (sc <= 17.1) wd = 7;
  else if (sc <= 20.7) wd = 8;
  else if (sc <= 24.4) wd = 9;
  else if (sc <= 28.4) wd = 10;
  else if (sc <= 32.6) wd = 11;
  else wd = 12;

  // output
  if (wd == 0) cout << "C" << " " << 0 << endl;
  else cout << dir << " " << wd << endl;
  return 0;

}