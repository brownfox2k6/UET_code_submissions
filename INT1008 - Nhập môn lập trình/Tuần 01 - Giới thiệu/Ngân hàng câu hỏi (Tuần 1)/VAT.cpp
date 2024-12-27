#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  int a;
  cin >> a;
  cout << fixed << setprecision(2);
  cout << 1.1 * a;
}