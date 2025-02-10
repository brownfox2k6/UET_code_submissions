#include <iostream>
#include <iomanip>
using namespace std;

signed main() {
  double c;
  cin >> c;
  double f = c * 9 / 5 + 32;
  cout << fixed << setprecision(2) << f;
}