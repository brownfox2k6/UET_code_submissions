#include <iostream>
using namespace std;

int main() {
  int l, r;
  cin >> l >> r;

  int ret = 0;
  for (int i = l + 1; i <= r; ++i) {
    if (i <= 12) {
      ret += 6000;
    } else {
      ret += 7500;
    }
  }
  cout << ret;
}