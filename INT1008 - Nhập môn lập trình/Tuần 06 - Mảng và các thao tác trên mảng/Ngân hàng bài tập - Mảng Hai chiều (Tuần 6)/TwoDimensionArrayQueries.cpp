#include <iostream>
using namespace std;

signed main() {
  int n, m, q;
  cin >> n >> m >> q;
  int a[n][m];
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> a[i][j];
    }
  }
  while (q--) {
    int x, y;
    cin >> x >> y;
    cout << a[x-1][y-1] << '\n';
  }
}