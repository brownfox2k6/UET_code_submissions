// Số chính phương

#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;

  // do binary search hehehehe
  int lo = 1;
  int hi = 1000;
  while (lo <= hi) {
    int mid = (lo + hi) >> 1;
    if (mid * mid == n) {
      cout << "yes";
      return 0;
    } else if (mid * mid < n) {
      lo = mid + 1;
    } else {
      hi = mid - 1;
    }
  }
  cout << "no";
}