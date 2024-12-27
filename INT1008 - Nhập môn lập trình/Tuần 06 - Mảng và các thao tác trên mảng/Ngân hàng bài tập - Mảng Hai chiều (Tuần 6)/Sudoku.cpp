#include <iostream>
using namespace std;

signed main() {
  int a[9][9];
  for (int i = 0; i < 9; ++i) {
    for (int j = 0; j < 9; ++j) {
      cin >> a[i][j];
    }
  }
  int x, y, k;
  cin >> k >> x >> y;
  --x; --y;
  if (k < 1 || k > 9) {
    cout << "Invalid number.";
    return 0;
  }
  for (int i = 0; i < 9; ++i) {
    if (a[i][y] == k || a[x][i] == k) {
      cout << "Invalid place.";
      return 0;
    }
  }
  int nx = x - x % 3;
  int ny = y - y % 3;
  for (int i = nx; i < nx + 3; ++i) {
    for (int j = ny; j < ny + 3; ++j) {
      if (a[i][j] == k) {
        cout << "Invalid place.";
        return 0;
      }
    }
  }
  cout << "Valid place.";
}