#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  long double a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  cout << fixed << setprecision(2);
  cout << ((a + b + c) + 2 * (d + e) + 3 * f) / 10;
}