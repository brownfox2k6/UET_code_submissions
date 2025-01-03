#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int a[n];
  for (int &x : a) {
    cin >> x;
  }

  int dem = 0;
  int tong = 0;
  for (int x : a) {
    if (x % 2 == 0) {
      ++dem;
      tong += x;
    }
  }

  double tbc = dem? (1.0 * tong / dem) : 0;
  for (int x : a) {
    if (x % 2 == 1 && x > tbc) {
      cout << x << ' ';
    }
  }
}