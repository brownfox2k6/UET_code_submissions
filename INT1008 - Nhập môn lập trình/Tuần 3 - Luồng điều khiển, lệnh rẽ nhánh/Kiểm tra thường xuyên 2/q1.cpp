#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  if (x % 3 == 1 && (x + y) % 2 == 0) {
    cout << "true";
  } else {
    cout << "false";
  }
}