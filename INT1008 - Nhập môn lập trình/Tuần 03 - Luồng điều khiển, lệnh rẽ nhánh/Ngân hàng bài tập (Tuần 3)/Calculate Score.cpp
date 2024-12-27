#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

// làm tròn x đến bội gần nhất của y
void rnd(double &x, double y) {
  int k = x / y;
  double x1 = k * y;
  double x2 = (k+1) * y;
  if (abs(x1 - x) < abs(x2 - x)) x = x1;
  else x = x2;
}

int main() {
  int LT;
  cin >> LT;
  double TH[10];
  int nTH = 0;
  for (double &x : TH) {
    cin >> x;
    nTH += (x != 0);
  }
  sort(TH, TH+10, greater<double>());
  double TBTH = accumulate(TH, TH+5, 0.0) / 5;
  rnd(TBTH, 0.5);

  double GK1, GK2;
  cin >> GK1 >> GK2;
  double TBGK = (GK1 + GK2) / 2;
  rnd(TBGK, 0.5);

  double CK, ST;
  cin >> CK >> ST;

  rnd(CK, 0.5);
  rnd(ST, 0.5);

  int CC = LT + nTH;
  if (CC < 20) {
    cout << 0;
  } else {
    double TK = 0.2 * TBTH + 0.2 * TBGK + 0.6 * (ST + CK);
    rnd(TK, 0.1);
    cout << min(10.0, TK);
  }
}