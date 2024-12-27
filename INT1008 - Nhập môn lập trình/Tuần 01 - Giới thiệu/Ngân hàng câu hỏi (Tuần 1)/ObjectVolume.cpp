#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  double a, b, h;
  cin >> a >> b >> h;

  cout << fixed << setprecision(2);
  cout << a * b * h;
}