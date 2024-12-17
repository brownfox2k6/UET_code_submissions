#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;

  bool ok = n % 2 == 0;
  cout << boolalpha << ok;
}