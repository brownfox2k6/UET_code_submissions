#include <iostream>
using namespace std;

signed main() {
  int n;
  int s = 0;
  for (cin >> n; n--; ) {
    int x;
    cin >> x;
    if (x % 15 == 0) {
      s += x;
    }
  }
  cout << s;
}