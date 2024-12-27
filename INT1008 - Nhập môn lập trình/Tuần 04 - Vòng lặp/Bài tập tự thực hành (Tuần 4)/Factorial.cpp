#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int ret = 1;
  for (int i = 2; i <= n; ++i) {
    ret *= i;
  }
  cout << ret;
}