#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int p = 0;
  int ret = 0;
  for (int i = 1; i <= n; ++i) {
    p += i;
    ret += p;
  }
  cout << ret;
}