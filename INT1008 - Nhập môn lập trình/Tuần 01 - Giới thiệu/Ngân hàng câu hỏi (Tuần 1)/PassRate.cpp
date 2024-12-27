#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  int a, b;
  cin >> a >> b;

  cout << fixed << setprecision(2);
  cout << 1.0 * b / a;
}