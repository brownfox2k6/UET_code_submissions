// Trên trung bình

#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  double a[n];
  double tb = 0;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    tb += a[i];
  }
  tb /= n;
  cout << fixed << setprecision(2);
  for (int i = 0; i < n; ++i) {
    if (a[i] >= tb) {
      cout << a[i] << ' ';
    }
  }
}