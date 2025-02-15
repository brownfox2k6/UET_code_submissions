#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

signed main() {
  double a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  double sum = (a + b + c) + 2 * (d + e) + 3 * f;
  cout << fixed << setprecision(2);
  cout << sum / 10;
}