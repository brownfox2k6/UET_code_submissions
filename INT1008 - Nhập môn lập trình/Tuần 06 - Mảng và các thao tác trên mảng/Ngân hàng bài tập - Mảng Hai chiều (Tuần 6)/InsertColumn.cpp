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
    int t = id - 1;
    for (int j = 0; j < m; ++j) {
      if (j == t) {
        cout << x << ' ';
        --j;
        t = -1;
      } else {
        cout << a[i][j] << ' ';
      }
    }
    cout << '\n';
  }
}