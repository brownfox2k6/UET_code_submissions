#include <iostream>
using namespace std;

signed main() {
  int a, b;
  cin >> a >> b;
  int c = 0;
  cout << "a = " << a << ", b = " << b << ", c = " << c << '\n';
  c = a;
  cout << "a = " << a << ", b = " << b << ", c = " << c << '\n';
  a = b;
  cout << "a = " << a << ", b = " << b << ", c = " << c << '\n';
  b = c;
  cout << "a = " << a << ", b = " << b << ", c = " << c << '\n';
}