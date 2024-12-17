/**
 *     author: brownfox2k6
 *    created: Wed 06 Nov 2024 22:17:49 Hanoi, Vietnam
**/
#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  int m, n;
  cin >> m >> n;
  float a[m+1][n+1];
  for (int i = 1; i <= m; ++i) {
    for (int j = 1; j <= n; ++j) {
      cin >> a[i][j];
    }
  }
  for (int i = 1; i <= m; ++i) {
    for (int j = 1; j <= n; ++j) {
      float x;
      cin >> x;
      a[i][j] += x;
    }
  }


  cout << fixed << setprecision(2);
  for (int i = 1; i <= m; ++i) {
    for (int j = 1; j <= n; ++j) {
      cout << a[i][j] << ' ';
    }
    cout << '\n';
  }
}