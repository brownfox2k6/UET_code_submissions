#include <iostream>
using namespace std;

signed main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << (a != b || b != c || c != a? "false" : "true");
}