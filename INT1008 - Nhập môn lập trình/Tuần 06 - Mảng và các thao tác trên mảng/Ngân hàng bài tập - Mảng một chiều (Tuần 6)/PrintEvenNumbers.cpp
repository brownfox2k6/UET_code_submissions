#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  for ( ; n--; ) {
    int x;
    cin >> x;
    if (x % 2 == 0) {
      cout << x << ' ';
    }
  }
}