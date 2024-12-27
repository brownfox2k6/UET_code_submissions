#include <iostream>
using namespace std;

signed main() {
  for (int i = 1000; i <= 2000; ++i) {
    cout << i << ' ';
    if (i % 5 == 4) {
      cout << '\n';
    }
  }
}