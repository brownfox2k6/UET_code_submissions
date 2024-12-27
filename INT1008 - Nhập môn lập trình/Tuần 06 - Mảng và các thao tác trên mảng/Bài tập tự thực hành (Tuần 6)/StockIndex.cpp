/**
 *     author: brownfox2k6
 *    created: Wed 06 Nov 2024 22:17:49 Hanoi, Vietnam
**/
#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  double a[n];
  for (double &x : a) {
    cin >> x;
  }

  cout << fixed << setprecision(2);
  for (int i = 1; i < n; ++i) {
    cout << abs(a[i] - a[i-1]) << ' ';
  }
}