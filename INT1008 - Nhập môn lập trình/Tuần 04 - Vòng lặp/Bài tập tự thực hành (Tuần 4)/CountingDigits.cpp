#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int x = 0;
  while (n) {
    ++x;
    n /= 10;
  }
  cout << x;
}