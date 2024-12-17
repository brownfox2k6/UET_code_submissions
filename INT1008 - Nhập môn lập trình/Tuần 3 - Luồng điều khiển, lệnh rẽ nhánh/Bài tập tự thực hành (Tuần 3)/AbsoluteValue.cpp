#include <iostream>
#include <cmath>
using namespace std;

signed main() {
  double x;
  cin >> x;
  // use setprecision won't work
  cout << abs(round(x * 100) / 100);
}