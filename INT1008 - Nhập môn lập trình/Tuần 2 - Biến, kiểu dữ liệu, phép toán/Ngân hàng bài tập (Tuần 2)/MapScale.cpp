#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  double a, b;
  cin >> a >> b;
  cout << fixed << setprecision(1);
  cout << a / b / 100;
}