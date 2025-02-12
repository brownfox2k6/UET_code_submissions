#include <iostream>
using namespace std;

signed main() {
  // ga + cho = x
  // 2ga + 4cho = y
  // ga = (4x - y) / 2
  // cho = (2x - y) / -2

  int x, y;
  cin >> x >> y;
  if ((4*x - y) % 2 != 0 || (2*x - y) % 2 != 0) {
    cout << "invalid";
  } else {
    cout << "chicken = " << (4*x - y) / 2 << ", dog = " << (y - 2*x) / 2;
  }
}