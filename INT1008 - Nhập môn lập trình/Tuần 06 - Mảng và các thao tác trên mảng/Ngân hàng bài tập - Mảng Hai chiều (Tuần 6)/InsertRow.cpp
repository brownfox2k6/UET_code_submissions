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
  int id, x;
  cin >> id >> x;
  for (int i = 0; i < n; ++i) {
    if (i == id - 1) {
      id = -1;
      --i;
      for (int j = 0; j < m; ++j) {
        cout << x << ' ';
      }
    } else {
      for (int j = 0; j < m; ++j) {
        cout << a[i][j] << ' ';
      }
    }
    cout << '\n';
  }
}