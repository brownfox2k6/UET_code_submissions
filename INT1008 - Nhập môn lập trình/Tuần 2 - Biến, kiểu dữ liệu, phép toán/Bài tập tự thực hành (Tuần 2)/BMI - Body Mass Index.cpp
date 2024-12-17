#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  long double a, b;
  cin >> a >> b;
  cout << fixed << setprecision(2) << a / (b * b);
}