#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  cout << fixed << setprecision(2);
  cout << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}