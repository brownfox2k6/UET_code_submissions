#include <iostream>
using namespace std;

int main() {
  int l, r, n;
  cin >> l >> r >> n;

  int ret = 0;
  for (int i = l + 1; i <= r; ++i) {
    if (i <= 17) {
      ret += 2500;
    } else {
      ret += 3000;
    }
  }
  cout << ret * n;
}