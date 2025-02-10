#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

signed main() {
  double a, b, c;
  cin >> a >> b >> c;
  double p = (a + b + c) / 2;
  double area = sqrt(p * (p - a) * (p - b) * (p - c));
  if (area == 0 || isnan(area)) {
    cout << "invalid";
  } else {
    cout << fixed << setprecision(2) << area;
  }
}