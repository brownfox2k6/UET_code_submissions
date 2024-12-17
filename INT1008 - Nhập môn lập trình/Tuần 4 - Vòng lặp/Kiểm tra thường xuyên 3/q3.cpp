#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;

  int a[n+1][n+1];
  for (int i = 0; i <= n; ++i) {
    for (int j = 0; j <= i; ++j) {
      if (j == 0 || j == i) {
        a[i][j] = 1;
      } else {
        a[i][j] = a[i-1][j] + a[i-1][j-1];
      }
    }
  }

  for (int i = 0; i <= n; ++i) {
    for (int j = 0; j <= i; ++j) {
      cout << a[i][j] << ' ';
    }
    cout << '\n';
  }
}