#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  double t, v;
  cin >> t >> v;
  cout << fixed << setprecision(2);
  cout << 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
}