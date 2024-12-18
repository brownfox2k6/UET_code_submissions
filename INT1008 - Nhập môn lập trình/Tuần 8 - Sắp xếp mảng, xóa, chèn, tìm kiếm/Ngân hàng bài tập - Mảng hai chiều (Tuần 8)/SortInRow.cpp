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
    int row;
    cin >> row;
    if (row >= 0 && row < n) {
      for (int i = 0; i < m; ++i) {
        for (int j = i+1; j < m; ++j) {
          if (a[row][j] > a[row][i]) {
            swap(a[row][i], a[row][j]);
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