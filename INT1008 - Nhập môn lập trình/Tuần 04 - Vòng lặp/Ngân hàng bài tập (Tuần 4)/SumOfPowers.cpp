#include <iostream>
using namespace std;

int bp(int a, int b) {
  int ret = 1;
  while (b) {
    if (b & 1) {
      ret *= a;
    }
    a *= a;
    b >>= 1;
  }
  return ret;
}

signed main() {
  int n;
  cin >> n;
  int s = 0;
  for (int i = 1; i <= n; ++i) {
    s += bp(i, i);
  }
  cout << s;
}