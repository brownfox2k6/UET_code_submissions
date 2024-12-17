#include <iostream>
using namespace std;

signed main() {
  int a, b;
  cin >> a >> b;

  a = abs(a);
  b = abs(b);
  while (b) {
    int c = a % b;
    a = b;
    b = c;
  }
  cout << a;
}