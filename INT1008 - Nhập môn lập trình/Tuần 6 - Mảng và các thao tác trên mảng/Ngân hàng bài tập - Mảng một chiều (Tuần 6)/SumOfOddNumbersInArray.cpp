#include <iostream>
using namespace std;

signed main() {
  int n, s = 0;
  for (cin >> n; n--; ) {
    int x;
    cin >> x;
    if (x & 1) {
      s += x;
    }
  }
  cout << s;
}