#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

signed main() {
  int x, y;
  cin >> x >> y;
  cout << fixed << setprecision(2);
  cout << sqrt(x * x + y * y);
}