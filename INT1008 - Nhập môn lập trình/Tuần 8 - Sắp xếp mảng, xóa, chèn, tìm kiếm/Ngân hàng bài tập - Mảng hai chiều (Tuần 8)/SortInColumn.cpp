#include <iostream>
using namespace std;

signed main() {
  int n, m;
  cin >> n >> m;

  int a[n][m];
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> a[i][j];
    }
  }

  {
    int col;
    cin >> col;
    if (col >= 0 && col < m) {
      for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
          if (a[j][col] > a[i][col]) {
            swap(a[i][col], a[j][col]);
          }
        }
      }
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cout << a[i][j] << ' ';
    }
    cout << '\n';
  }
}