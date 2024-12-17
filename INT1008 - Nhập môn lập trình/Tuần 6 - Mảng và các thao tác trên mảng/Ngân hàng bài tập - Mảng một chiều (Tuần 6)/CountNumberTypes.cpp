#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int duong = 0, am = 0, zero = 0;
  for ( ; n--; ) {
    int x;
    cin >> x;
    if (x > 0) {
      duong++;
    } else if (x < 0) {
      am++;
    } else {
      zero++;
    }
  }
  cout << am << ' ' << duong << ' ' << zero;
}