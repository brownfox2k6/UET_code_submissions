#include <iostream>
using namespace std;

signed main() {
  int a, b;
  cin >> a >> b;

  bool ok = a % 7 == 0 and b % 7 == 0;
  cout << boolalpha << ok;
}