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
  int id;
  cin >> id;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (j != id - 1) {
        cout << a[i][j] << ' ';
      }
    }
    cout << '\n';
  }
}