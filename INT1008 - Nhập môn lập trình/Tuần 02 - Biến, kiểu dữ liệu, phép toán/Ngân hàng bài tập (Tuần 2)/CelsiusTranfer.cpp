#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  double a;
  cin >> a;
  cout << fixed << setprecision(2);
  cout << 9 * a / 5 + 32;
}