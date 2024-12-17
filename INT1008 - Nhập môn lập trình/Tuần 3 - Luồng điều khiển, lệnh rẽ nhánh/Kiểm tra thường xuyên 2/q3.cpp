#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;

  if (x % 3 == 0) {
    x += 3;
    if ((x - 3) % 5 == 1) {
      x *= 3;
    }
  } else {
    x -= 3;
  }

  cout << x;
}