#include <iostream>
using namespace std;

signed main() {
  long double x;
  cin >> x;
  cout << boolalpha << (0 < x && x < 1);
}