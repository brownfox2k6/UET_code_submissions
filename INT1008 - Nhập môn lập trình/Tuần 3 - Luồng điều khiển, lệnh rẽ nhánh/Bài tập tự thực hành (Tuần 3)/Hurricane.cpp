#include <iostream>
using namespace std;

signed main() {
  int x;
  cin >> x;
  if (x > 155) {
    cout << 5;
  } else if (x > 130) {
    cout << 4;
  } else if (x > 110) {
    cout << 3;
  } else if (x > 95) {
    cout << 2;
  } else if (x > 73) {
    cout << 1;
  } else {
    cout << 0;
  }
}