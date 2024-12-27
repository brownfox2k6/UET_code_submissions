// Mảng một chiều

#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int a[n];
  double tb = 0;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    tb += a[i];
  }
  tb /= n;
  for (int i = 0; i < n; ++i) {
    if (a[i] >= tb) {
      cout << a[i] << ' ';
    }
  }
}